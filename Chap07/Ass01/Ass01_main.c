/*
���ϸ�: Ass01_main.c
���̵�: ��
����: ũ�Ⱑ 10�� ������ �迭�� ���� ���������� ���� ä��� ���α׷�
����: ù��° �װ� ������ ����ڷκ��� �Է¹���
�ۼ���: �ȵ���
��¥: 2025.09.16
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input();
void fill(int arr[], int first, int cd);

// �Լ�1. �����Լ�
int main() {
	input();
	return 0;
}

// �Լ�2. ����ڷκ��� ù��° �װ� ������ �Է¹ް� �迭�� ���� ä��� �Լ� ȣ��
void input() {
	int first, cd;
	int arr[10];
	printf("ù��° ���� �Է��ϼ���: ");
	scanf("%d", &first);
	printf("������ �Է��ϼ���: ");
	scanf("%d", &cd);
	fill(arr, first, cd);
	return;
}

// �Լ�3. ���������� �迭�� ���� ä��� ����ϴ� �Լ�
void fill(int arr[], int first, int cd) {
	for (int i = 0; i < 10; i++) {
		arr[i] = first + i * cd;
	}
	printf("�迭�� ��: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return;
}