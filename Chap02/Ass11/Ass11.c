/*
���ϸ� : Ass11.c
���� : PA11. ���� ���� ���� ������� ����ϴ� ���α׷� �ۼ�. �Ҽ��� ���� 2�ڸ�, 4�ڸ�, 6�ڸ�, 8�ڸ�, ����ǥ�� ������ ���.
�ۼ��� : ������� 202010853 �ȵ���
��¥ : 2025.03.25
���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pi();

int main()
{
	pi();
	return 0;
}

void pi()
{
	double pi = 3.14159265358979323846;
	printf("pi = %.2f\n", pi);
	printf("pi = %.4f\n", pi);
	printf("pi = %.6f\n", pi);
	printf("pi = %.8f\n", pi);
	printf("pi = %e\n", pi);
}