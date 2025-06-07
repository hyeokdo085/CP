/*
���ϸ�: Ass13_main.c
����: ���簢�� ������ ��Ÿ���� RECT ����ü
����:
1. ���簢���� ���ϴ����� ���������� ����, ��ǥ�� ����ü�� ǥ��
2. ���簢�� ������ ����ϴ� print_rect �Լ� �ۼ�
3. RECT ����ü ���� �����Ͽ� ���簢�� ���� �Է¹޾� ���
�ۼ���: �ȵ���
��¥: 2025.06.07
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct rect {
	int x1, y1; // ���ϴ��� ��ǥ
	int x2, y2; // ������ ��ǥ
} RECT;

void ass13(void);
void print_rect(RECT r);

// �Լ�1 : �����Լ�
int main() {
	ass13(); //�Լ� ȣ��
	return 0;
}

// �Լ�2 : ���簢�� ������ �Է¹ް� ����ϴ� �Լ�
void ass13(void) {
	RECT r; // RECT ����ü ���� ����
	// 1. ���ϴ����� ������ ��ǥ �Է¹ޱ�
	printf("���簢���� ���ϴ���(x,y)? ");
	scanf("%d %d", &r.x1, &r.y1);
	printf("���簢���� ������(x,y)? ");
	scanf("%d %d", &r.x2, &r.y2);
	// 2. ���簢�� ���� ����ϱ�
	print_rect(r);
	return;
}

// �Լ�3 : RECT ����ü�� �Ű������� �޾� ���簢�� ������ ����ϴ� �Լ�
void print_rect(RECT r) {
	printf("[RECT ���ϴ���:(%d, %d) ������:(%d,%d)]\n", r.x1, r.y1, r.x2, r.y2);
	return;
}