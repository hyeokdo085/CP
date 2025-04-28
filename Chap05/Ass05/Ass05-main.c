/*
���ϸ�: Ass05_main.c
����: �µ��� �Է� �޾� ȭ���� ������, ������ ȭ���� ��ȯ�ϴ� ���α׷�
����:
1. "27 C", "27 F" �������� �Է¹ޱ�
2. ���� = (ȭ�� - 32) * 5 / 9
3. ȭ�� = (���� * 9 / 5) + 32
�ۼ���: �ȵ���
��¥: 2025.04.23
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ass05(void);
void tempConvert(double temp, char type);

// �Լ�1 : �����Լ�
int main() {
	ass05(); //�Լ� ȣ��
	return 0;
}

// �Լ�2 : �µ��� ������ �Է¹ް�, �µ� ��ȯ �Լ� ȣ��
void ass05(void) {
	double temp = 0;
	char type = ' ';
	// 1. �µ��� ���� �Է¹ޱ�
	printf("�µ�? ");
	scanf("%lf %c", &temp, &type);
	// 2. �µ� ��ȯ �Լ� ȣ��
	tempConvert(temp, type);
	return;
}

// �Լ�3 : �µ� ��ȯ �� ��� ���
void tempConvert(double temp, char type) {
	double converted = 0;
	// 1. �µ� ��ȯ(ȭ�� -> ����)
	if (type == 'F') {
		converted = (temp - 32) * 5 / 9;
		printf("%.2f F ==> %.2f C\n", temp, converted);
	}
	// 2. �µ� ��ȯ(���� -> ȭ��)
	else if (type == 'C') {
		converted = (temp * 9 / 5) + 32;
		printf("%.2f C ==> %.2f F\n", temp, converted);
	}
	// 3. �߸��� ���� �Է� �� ���� �޽��� ���
	else {
		printf("�߸��� �����Դϴ�.\n");
	}
	return;
}