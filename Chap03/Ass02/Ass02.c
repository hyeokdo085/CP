/*
���ϸ�: Ass02.c
����: ���� �� ���� ���� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷�
�ۼ���: �ȵ���
��¥: 2025.04.06
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void square();

int main() {

	square();
	return 0;
}

void square() {
	int x = 0, y = 0;

	printf("������ ����? ");
	scanf("%d", &x);
	printf("������ ����? ");
	scanf("%d", &y);

	printf("���簢���� ���� : %d\n", x*y);
	printf("���簢���� �ѷ� : %d\n", 2*(x+y));
}