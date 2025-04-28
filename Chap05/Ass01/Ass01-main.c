/*
���ϸ�: Ass01_main.c
����: ���� ��ǥ x,y�� �Է¹޾� ���� �� ������ �˻��ϴ� ���α׷�
����: �»�ܿ��� ���ϴ����� �� ���� ��ǥ���� ������(left<right, top<bottom)
�ۼ���: �ȵ���
��¥: 2025.04.23
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ass01(void);
int squareCheck(int left, int top, int right, int bottom);

// �Լ�1 : �����Լ�
int main() {
	ass01(); //�Լ� ȣ��
	return 0;
}

// �Լ�2 : ���� ���� �Է¹ް� ���� ��ǥ �˻� �Լ� ȣ�� �� ��� ���
void ass01(void) {
	int left = 0, top = 0, right = 0, bottom = 0, point = 0;
	// 1. ���� ���� �Է¹ޱ�
	printf("���� ������ �»���� (left, top)? ");
	scanf("%d %d", &left, &top);
	printf("���� ������ ���ϴ��� (right, bottom)? ");
	scanf("%d %d", &right, &bottom);
	// 2. ��ǥ �˻� �Լ� ȣ��
	point = squareCheck(left, top, right, bottom);
	// 3. ��� ���
	if (point == 1) {
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.\n");
	}
	else {
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.\n");
	}
	return;
}

// �Լ�3 : ���� ��ǥ �˻�
int squareCheck(int left, int top, int right, int bottom) {
	int x = 0, y = 0;
	// 1. ���� ��ǥ �Է¹ޱ�
	printf("���� ��ǥ (x, y)? ");
	scanf("%d %d", &x, &y);
	// 2. ���� �� ������ �˻�
	if (left <= x && x <= right && top <= y && y <= bottom) {
		return 1; // ���� �� ��
	}
	else {
		return 0; // ���� �� ��
	}
}