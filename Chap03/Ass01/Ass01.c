/*
���ϸ�: Ass01.c
����: �� ���� ���� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷�
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
	int line = 0;

	printf("�� ���� ���� ? ");
	scanf("%d", &line);

	printf("���簢���� ���� : %d\n", line * line);
	printf("���簢���� �ѷ� : %d\n", line * 4);
}