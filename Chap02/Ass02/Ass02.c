/*
���ϸ� : Ass02.c
���� : PA2. �л��� ��ȣ�� ���� �Է¹޾� ����ϴ� ���α׷� �ۼ�. ��, ��ȣ�� ����, ������ �Ǽ�.
�ۼ��� : ������� 202010853 �ȵ���
��¥ : 2025.03.25
���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void student();

int main()
{
	student();
	return 0;
}

void student()
{
	int id;
	float grade;
	printf("��ȣ? ");
	scanf("%d", &id);
	printf("����? ");
	scanf("%f", &grade);
	printf("%d�� �л��� ������ %.6f�Դϴ�.", id, grade);
}