/*
���ϸ�: Ass07.c
����: �Ǽ��� �Է¹޾� �� ���� ������ ������ ����ϴ� ���α׷�(�Ǽ��� �Է��� �Ҽ�ǥ�� or ����ǥ�� ����, ����� ����ǥ��)
�ۼ���: �ȵ���
��¥: 2025.04.06
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void squareCube();

int main() {

	squareCube();
	return 0;
}

void squareCube() {
	double num = 0;

	printf("�Ǽ�? ");
	scanf("%lf", &num);

	printf("���� : %e\n", num*num);
	printf("������ : %e\n", num * num * num);
}