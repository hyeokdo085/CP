/*
���ϸ�: Ass04_main.c
���̵�: ��
����: ������ �迭�� ���� �迭�� ���� �� �ִ��� ���� ���ҿ� �ּڰ��� ���� ������ �ε����� ���� ����ϴ� ���α׷�
�ۼ���: �ȵ���
��¥: 2025.09.16
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void find_max(int arr[]);
void find_min(int arr[]);
void array();

// �Լ�1. �����Լ�
int main() {
	array();
	return 0;
}

// �Լ�2. �迭�� ����ϰ�, �ִ� �˻� �Լ��� �ּڰ� �˻� �Լ� ȣ��
void array() {
	int arr[] = { 23, 45, 62, 12, 99, 83, 23, 50, 12, 37 };
	printf("�迭: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	find_max(arr);
	find_min(arr);
	return;
}

// �Լ�3. �迭���� �ִ��� ã�� �ε����� ���� ����ϴ� �Լ�
void find_max(int arr[]) {
	int max = arr[0];
	int max_index = 0;
	for (int i = 1; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
			max_index = i;
		}
	}
	printf("�ִ�: �ε���=%d, ��=%d\n", max_index, max);
	return;
}

// �Լ�4. �迭���� �ּڰ��� ã�� �ε����� ���� ����ϴ� �Լ�
void find_min(int arr[]) {
	int min = arr[0];
	int min_index = 0;
	for (int i = 1; i < 10; i++) {
		if (arr[i] < min) {
			min = arr[i];
			min_index = i;
		}
	}
	printf("�ּڰ�: �ε���=%d, ��=%d\n", min_index, min);
	return;
}