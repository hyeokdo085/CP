/*
���ϸ�: Ass10.c
����: ��/�޷� ȯ���� �޷� �Է¹޾� �� ������ ����ϴ� ���α׷�
�ۼ���: �ȵ���
��¥: 2025.04.06
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exchange();

int main() {

	exchange();
	return 0;
}

void exchange() {
	double doller = 0;
	double rate = 0;

	printf("USD? ");
	scanf("%lf", &doller);
	printf("��/�޷� ȯ��? ");
	scanf("%lf", &rate);

	printf("USD %.2lf = KRW %.2lf\n", doller, doller*rate);
}