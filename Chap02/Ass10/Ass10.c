/*
���ϸ� : Ass10.c
���� : PA10. ������ 8, 10, 16���� �� �ϳ��� �Է¹޾�, 8,10,16���� ���� �󸶿� �ش��ϴ��� ����ϴ� ���α׷� �ۼ�.
�ۼ��� : ������� 202010853 �ȵ���
��¥ : 2025.03.25
���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void converter();

int main()
{
	converter();
	return 0;
}

void converter()
{
	int num;
	printf("8������ �Է��Ϸ��� 012, 16������ �Է��Ϸ��� 0x12ó�� �Է��ϼ���.\n����? ");
	scanf("%i", &num);
	printf("8���� : 0%o\n", num);
	printf("10���� : %d\n", num);
	printf("16���� : %#x\n", num);
}