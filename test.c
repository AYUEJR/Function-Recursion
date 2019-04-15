#include<stdio.h>
#include <stdlib.h>
//递归实现斐波那契函数
int FBNQ(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	return FBNQ(n - 1) + FBNQ(n - 2);
}

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
int DigitSum(int n) {
	if (n == 0) {
		return 0;
	}
	return n % 10 + DigitSum(n / 10);
}

//编写一个函数 reverse_string(char * string)（递归实现） 
/*实现：将参数字符串中的字符反向排列。*/
//要求：不能使用C函数库中的字符串操作函数。
void reverse_string(char * string) {
	int len = strlen(string) - 1;
	char tmp;
	
	if (string[0] == '\0') {
		return;
	}
	tmp = string[0];
	string[0] = string[len];
	string[len] = '\0';
	reverse_string(string + 1);
	string[len] = tmp;
 }



//递归实现n^k函数
int MyPow(int n, int k) {
	if (k == 1) {
		return n;
	}
	return n * MyPow(n, k - 1);
}
int main() {
	printf("%d\n", MyPow(2, 4));
	printf("%d\n", FBNQ(7));
	printf("%d", DigitSum(1729));
	char str[] = "zhangyue";
	reverse_string(str);
	printf("%s\n", str);

	system("pause");
	return 0;
}