/*
���ϸ�: Ass07_main.c
���̵�: ��
����: ������ �迭�� ��� ���Ҹ� Ư�� ������ ä��� fill_array �Լ��� �ۼ��ϰ�, ũ�Ⱑ 20�� �迭�� �����Ͽ� ��ü�� ä��� ���α׷�
����: fill_array �Լ��� �迭, ũ��, ���� �Ű������� ����
�ۼ���: �ȵ���
��¥: 2025.09.16
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fill_array(int arr[], int size, int value);
void input();

// �Լ�1. �����Լ�
int main() {
	input();
	return 0;
}

// �Լ�2. ����ڷκ��� ä�� ���� �Է¹ް� �迭�� ä��� �Լ� ȣ��
void input() {
	int arr[20];
	int value;
	printf("ä�� ��? ");
	scanf("%d", &value);
	fill_array(arr, 20, value);
	return;
}

// �Լ�3. �迭�� ��� ���Ҹ� Ư�� ������ ä��� ����ϴ� �Լ�
void fill_array(int arr[], int size, int value) {
	for (int i = 0; i < size; i++) {
		arr[i] = value;
	}
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return;
}