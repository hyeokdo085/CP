/*
���ϸ�: Ass03.c
����: ���� �� ���� �Է¹޾� ��ġ �������� ���ϴ� ���α׷�
�ۼ���: �ȵ���
��¥: 2025.04.06
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void energy();

int main() {

	energy();
	return 0;
}

void energy() {
	double weight = 0, height = 0;

	printf("����(kg)? ");
	scanf("%lf", &weight);
	printf("����(m)? ");
	scanf("%lf", &height);

	printf("��ġ������ : %.6lf J\n", 9.8*weight*height);
}