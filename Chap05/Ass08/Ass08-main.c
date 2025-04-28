/*
���ϸ�: Ass08_main.c
����: ��Ʈ ������ �����ϴ� ���� ���α׷�
����:
1. �Է¹��� �� 10����, 8����, 16������ ��� ����
2. �Է¹��� �� 16������ 0x�� ����
3. ��Ʈ ������: AND, OR, XOR ���
4. ����� ��, 16������ ���
�ۼ���: �ȵ���
��¥: 2025.04.23
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ass08(void);
int bitCal(int num1, int num2, char oper);

// �Լ�1 : �����Լ�
int main() {
	ass08(); //�Լ� ȣ��
	return 0;
}

// �Լ�2 : ���� 2���� ������ �Է¹ް� ��Ʈ ���� �Լ� ȣ���ϰ�, ��� ���
void ass08(void) {
	int num1 = 0, num2 = 0;
	char oper = ' ';
	// 1. ���� 2���� ������ �Է¹ޱ�
	printf("��Ʈ �����? ");
	scanf("%i %c %i", &num1, &oper, &num2);
	// 2. ��Ʈ ���� �Լ� ȣ��
	int result = bitCal(num1, num2, oper);
	// 3. ��� ���
	printf("%X %c %X = %X\n", num1, oper, num2, result);
	return;
}

// �Լ�3 : ��Ʈ ����
int bitCal(int num1, int num2, char oper) {
	int result = 0;
	// 1. ��Ʈ ���� ����
	switch (oper) {
	case '&':
		result = num1 & num2; // AND
		break;
	case '|':
		result = num1 | num2; // OR
		break;
	case '^':
		result = num1 ^ num2; // XOR
		break;
	default:
		printf("�߸��� �������Դϴ�.\n");
		break;
	}
	return result;
}