/*
���ϸ� : Ass09.c
���� : PA9. 16���� ������ �Է¹޾� 10������ ����ϴ� ���α׷� �ۼ�.
�ۼ��� : ������� 202010853 �ȵ���
��¥ : 2025.03.25
���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void HtoD();

int main()
{
	HtoD();
	return 0;
}

void HtoD()
{
	int hex;
	printf("16���� ����? ");
	scanf("%x", &hex);
	printf("16���� %x�� 10������ %d�Դϴ�.", hex, hex);
}