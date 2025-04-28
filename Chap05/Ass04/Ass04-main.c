/*
���ϸ�: Ass04_main.c
����: ������ �Է¹޾� �������� �˻��ϴ� ���α׷�
����:
1. 4�� ������ �������� ����
2. 1�� �����ϳ�, 100���� ������ �������� ����X
3. 2�� �����ϳ�, 400���� ������ �������� ����
�ۼ���: �ȵ���
��¥: 2025.04.23
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ass04(void);
int leapYear(int year);

// �Լ�1 : �����Լ�
int main() {
	ass04(); //�Լ� ȣ��
	return 0;
}

// �Լ�2 : ���� �Է¹ް�, ���� �˻� �Լ� ȣ�� �� ��� ���
void ass04(void) {
	int year = 0, leap = 0;
	// 1. ���� �Է¹ޱ�
	printf("����? ");
	scanf("%d", &year);
	// 2. ���� �˻� �Լ� ȣ��
	leap = leapYear(year);
	// 3. ��� ���
	if (leap == 1) {
		printf("%d���� �����Դϴ�.\n", year);
	}
	else {
		printf("%d���� ������ �ƴմϴ�.\n", year);
	}
	return;
}

// �Լ�3 : ���� �˻�
int leapYear(int year) {
	// 1. ���� �˻�
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				return 1; // ����
			}
			else {
				return 0; // ����X
			}
		}
		else {
			return 1; // ����
		}
	}
	else {
		return 0; // ����X
	}
}