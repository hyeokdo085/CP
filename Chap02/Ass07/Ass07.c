/*
���ϸ� : Ass07.c
���� : PA7. Ŀ�� ������(S, T, G)�� �ֹ� ���� �Է¹޾� ����ϴ� ���α׷� �ۼ�. Ŀ�� ������� S, T, G ���� �� �ϳ��� �Է�.
�ۼ��� : ������� 202010853 �ȵ���
��¥ : 2025.03.25
���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void order();

int main()
{
	order();
	return 0;
}

void order()
{
	char size;
	int num;
	printf("Ŀ�� ������(S,T,G)�� �ֹ� ����? ");
	scanf("%c %d", &size, &num);
	printf("%c ������ %d���� �ֹ��մϴ�.", size, num);
}