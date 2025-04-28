/*
���ϸ�: Ass03_main.c
����: �Ž����� �Է¹޾� ����, ��, õ, ��, �ʿ��� �� �� �ʿ����� ���ϱ�(10�� �̸� ����)
�ۼ���: �ȵ���
��¥: 2025.04.23
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input(void);
void change(int money);

// �Լ�1 : �����Լ�
int main() {
	input(); //�Լ� ȣ��
	return 0;
}

// �Լ�2 : �Ž����� �Է¹ޱ�
void input(void) {
	int money;
	// 1. �Ž����� �Է¹ޱ�
	printf("�Ž�����? : ");
	scanf("%d", &money);
	// 2. �Լ� ȣ��
	change(money);
}

// �Լ�3 : �Ž����� ����ϱ�
void change(int money) {
	int _50k = 0, _10k = 0, _1k = 0, _100 = 0, _10 = 0;
	// 1. 10�� ���� ���� �� �Ž����� ���
	money = money - (money % 10);
	printf("�Ž����� (10���̸� ����): %d\n", money);
	// 2. �������� ��� �� ���
	if (money / 50000 > 0) {
		_50k = money / 50000;
		money = money % 50000;
		printf("50000�� %d��\n", _50k);
	}
	// 3. ������ ~ ����� ��� �� ���
	if (money / 10000 > 0) {
		_10k = money / 10000;
		money = money % 10000;
		printf("10000�� %d��\n", _10k);
	}
	if (money / 1000 > 0) {
		_1k = money / 1000;
		money = money % 1000;
		printf("1000�� %d��\n", _1k);
	}
	if (money / 100 > 0) {
		_100 = money / 100;
		money = money % 100;
		printf("100�� %d��\n", _100);
	}
	if (money / 10 > 0) {
		_10 = money / 10;
		money = money % 10;
		printf("10�� %d��\n", _10);
	}
	return;
}