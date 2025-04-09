/*
���ϸ�: Ass02-main.c
����: ȭ�� �µ�(F)�� �Ǽ��� �Է¹޾� ���� �µ�(C)�� ��ȯ �� ����ϴ� ���α׷�
�ۼ���: �ȵ���
��¥: 2025.04.09
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ass0402(void);
double FtoC(double fahrenheit);

int main(void) {
	ass0402();
	return 0;
}


/*
	�Լ���: ass0402()
	���: ȭ�� �µ��� �Ǽ��� �Է¹���, ȭ���� ������ ��ȯ�ϵ��� ȣ��, ��� ���
	�Է�: ����
	��ȯ: ����(0=����, �׿�=����)
*/
int ass0402(void) {

	// 1. ȭ�� �µ� �Է¹޾� ����
	double F = 0.0 ; // ȭ���µ� = F
	printf("ȭ�� �µ�? ");
	scanf("%lf", &F);

	// 2. ȭ�� �µ� -> ���� �µ� ��ȯ
	double result = FtoC(F);

	// 3. ��ȯ�� ���� �µ� ���
	printf("%.2f F = %.2f C", F, result);
	return 0;
}


/*
	�Լ���: FtoC()
	���: ȭ�� �µ� �Է¹޾� ���� �µ� ��ȯ �� ��ȯ
	�Է�: ȭ�� �µ�(F, �Ǽ�)
	��ȯ: ���� �µ�(C, �Ǽ�)
*/
double FtoC(double Fahrenheit) {
	double Celsius = 0.0;
	// ���� = (ȭ���µ� - 32) * (5/9)
	Celsius = (Fahrenheit - 32) * (5.0 / 9.0);

	return Celsius;
}