#include<stdio.h>
#include <stdlib.h>
//�ݹ�ʵ��쳲���������
int FBNQ(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	return FBNQ(n - 1) + FBNQ(n - 2);
}

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ� 
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
int DigitSum(int n) {
	if (n == 0) {
		return 0;
	}
	return n % 10 + DigitSum(n / 10);
}

//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� 
/*ʵ�֣��������ַ����е��ַ��������С�*/
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
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



//�ݹ�ʵ��n^k����
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