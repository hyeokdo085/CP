/*
���ϸ�: Ass01_main.c
����: ������ �ӷ��� �Ǽ��� �Է¹޾� � �������� ���ϴ� ���α׷� �ۼ�(����:kg, �ӷ�: m/s)
�ۼ���: �ȵ���
��¥: 2025.04.09
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ass0401(void);
double getMotionEnergy(double weight, double velocity);

int main(void) {
	ass0401();
	return 0;
}


/*
	�Լ���: ass0401()
	���: ����, �ӷ� �Ǽ��� �Է¹���, � �������� ����ϵ��� ȣ��, ��� ���
	�Է�: ����
	��ȯ: ����(0=����, �׿�=����)
*/
int ass0401(void) {

	// 1. ����, �ӵ� �Է¹޾� ����
	double w = 0.0, v = 0.0; // ���� kg, �ӷ� m/s
	printf("����(kg) �ӵ�(m/s)�� �Է����ּ���: ");
	scanf("%lf %lf", &w, &v);

	// 2. ������� ���
	double result = getMotionEnergy(w, v);

	// 3. ���� ������� ���
	printf("���� = %.2f kg, �ӷ� = %.2f m/s�� ��������� %.2f J �Դϴ�.", w, v, result);
	return 0;
}


/*
	�Լ���: getMotionEnergy()
	���: ����, �ӷ� �Է¹޾� � ������ ��� �� ��ȯ
	�Է�: ����(kg, �Ǽ�), �ӷ�(m/s, �Ǽ�)
	��ȯ: �������(J, �Ǽ�, �Ҽ��� 2�ڸ�)
*/
double getMotionEnergy(double weight, double velocity) {
	double energy = 0.0;
	// ������� = 1/2 * ���� * �ӷ�^2
	energy = 0.5 * weight * velocity * velocity;

	return energy;
}