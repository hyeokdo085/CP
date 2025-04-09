/*
���ϸ�: Ass08-main.c
����: �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷� (����=3.141592)
�ۼ���: �ȵ���
��¥: 2025.04.09
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ass0408(void);
double ballVolume(double radius);

int main(void) {
	ass0408();
	return 0;
}


/*
	�Լ���: ass0408()
	���: ���� �������� �Ǽ��� �Է¹���, ���� ���Ǹ� ����ϵ��� ȣ��, ��� ���
	�Է�: ����
	��ȯ: ����(0=����, �׿�=����)
*/
int ass0408(void) {

	// 1. ���� ������ �Է¹޾� ����
	double r = 0.0; // ������ = r
	printf("�������� ����? ");
	scanf("%lf", &r);

	// 2. ������ -> ���� ���� ���
	double result = ballVolume(r);

	// 3. ����� ���� ���� ���
	printf("�������� %.2f �� ���� ���� : %.6f", r, result);
	return 0;
}


/*
	�Լ���: ballVolume()
	���: ������ �Է¹޾� ���� ���� ��� �� ��ȯ
	�Է�: ������(r, �Ǽ�)
	��ȯ: ���� ����(Volume, �Ǽ�, �Ҽ��� 6�ڸ�)
*/
double ballVolume(double radius) {
	double volume = 0.0;
	double PI = 3.141592;
	// ���� ���� = 4/3 * ���� * ������^3
	volume = (4.0 / 3.0) * PI * radius * radius * radius;

	return volume;
}