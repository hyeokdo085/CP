/*
���ϸ�: Ass04.c
����: ��ü�� �ۿ��� ���� ũ��� �̵��� �Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷�
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
	double power = 0, length = 0;

	printf("��(N)? ");
	scanf("%lf", &power);
	printf("�̵��Ÿ�(m)? ");
	scanf("%lf", &length);

	printf("���� �� : %.2lf J\n", power * length);
}