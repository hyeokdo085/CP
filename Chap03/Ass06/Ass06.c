/*
���ϸ�: Ass06.c
����: ����Ʈ ������ �������ͷ� �Է¹޾� �� ������ ����ϴ� ���α׷�(�̸� �ִ� ��� ���)
�ۼ���: �ȵ���
��¥: 2025.04.06
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PYEONG 0.3025

void apt();

int main() {

	apt();
	return 0;
}

void apt() {
	double area = 0;

	printf("����Ʈ�� ����(��������)? ");
	scanf("%lf", &area);

	printf("%.2lf �������� = %.2lf ��\n", area, area*PYEONG);
}