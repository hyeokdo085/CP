/*
���ϸ�: Ass15-main.c
����: �Ÿű�����, ȯ��������� �Է¹޾� ȯ���� ����Ͽ� ����ϰ�, 
	������ �޷��� �Է¹޾� ȯ���� ��ȭ�� ����Ͽ� ����ϴ� ���α׷�(ȯ���������� 1.75%)
�ۼ���: �ȵ���
��¥: 2025.04.19
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ass0415(void);
double rate_exch(double standard, double prefer);
double exchanger(double dollar, double rate);

int main(void) {
	ass0415();
	return 0;
}


/*
	�Լ���: ass0415()
	���: �Ÿű�����, ȯ��������� �Է¹޾� ȯ���� ����ϵ��� ȣ��,
		������ �޷��� �Է¹޾� ȯ���� ��ȭ�� ����ϵ��� ȣ��,
		��� ���
	�Է�: ����
	��ȯ: ����(0=����, �׿�=����)
*/
int ass0415(void) {

	// 1. �Ÿű�����, ȯ�������, ȯ��, ������ �޷�, ��ȭ ���� ����
	double stand = 0.0, pref = 0.0, rate = 0.0, doller = 0.0, won = 0.0; // �Ÿű�����, ȯ�������, ȯ��, ������ �޷�, ��ȭ

	// 2. �Ÿű�����, ȯ������� �Է¹޾� ����
	printf("��/�޷� �Ÿű�����? ");
	scanf("%lf", &stand);
	printf("ȯ�������(0~100%)? ");
	scanf("%lf", &pref);

	// 3. ȯ�� ���
	rate = rate_exch(stand, pref);

	// 4. ȯ�� ���
	printf("�޷� �� �� ȯ���� %.6f �Դϴ�.\n", rate);

	// 5. ������ �޷� �Է¹޾� ��ȭ ���
	printf("������ �޷�(USD)? ");
	scanf("%lf", &doller);
	won = exchanger(doller, rate);

	//6. ��� ���
	printf("USD %.2f �� �� ==> KRW %.2f\n", doller, won);

	return 0;
}


/*
	�Լ���: rate_exch()
	���: �Ÿű������� ȯ��������� �Է¹޾� ȯ�� ��� �� ��ȯ
		ȯ�� = �Ÿű����� + ȯ��������
		ȯ�������� = �Ÿű����� * ȯ���������� * (1 - ȯ�������)
		ȯ���������� = 1.75%
	�Է�: �Ÿű�����(standard, �Ǽ�), ȯ�������(prefer, �Ǽ�)
	��ȯ: ȯ��(rate, �Ǽ�)
*/
double rate_exch(double standard, double prefer) {

	// 1. ȯ�� ���� ����
	double rate = 0.0;

	// 2. ȯ�� ���
	rate = standard + (standard * 0.0175 * (1 - prefer / 100));

	// 3. ȯ�� ��ȯ
	return rate;
}

/*
	�Լ���: exchanger()
	���: ������ �޷��� �Է¹޾� ȯ���� ��ȭ ��� �� ��ȯ
	�Է�: ������ �޷�(dollar, �Ǽ�), ȯ��(rate, �Ǽ�)
	��ȯ: ȯ���� ��ȭ(won, �Ǽ�)
*/
double exchanger(double dollar, double rate) {

	// 1. ȯ���� ��ȭ ���� ����
	double won = 0.0;

	// 2. ȯ���� ��ȭ ���
	won = dollar * rate;

	// 3. ȯ���� ��ȭ ��ȯ
	return won;
}