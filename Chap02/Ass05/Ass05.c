/*
���ϸ� : Ass05.c
���� : PA5. �����Ը� �Է¹޾� ����ϴ� ���α׷� �ۼ�. �����Դ� �Ǽ��� �Է�, �Ҽ��� ���� 2�ڸ����� ���.
�ۼ��� : ������� 202010853 �ȵ���
��¥ : 2025.03.25
���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void weight();

int main()
{
	weight();
	return 0;
}

void weight()
{
	float weight;
	printf("������? ");
	scanf("%f", &weight);
	printf("�Է��� �����Դ� %.2fKG�Դϴ�.", weight);
}