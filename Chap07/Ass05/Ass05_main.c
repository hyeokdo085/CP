/*
���ϸ�: Ass05_main.c
���̵�: ��
����: ������ �迭�� ���� ����ڰ� �Է��� ���� �迭 ���������� �������� ã�� �ε����� ��ȯ�ϴ� ���α׷�
����: ���Ҹ� ã�� �� ������ �����޼��� ���, ���� ���� ���Ұ� �������� ó�� ã�� ������ �ε��� ��ȯ
�ۼ���: �ȵ���
��¥: 2025.09.16
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input();
int find(int arr[], int target);

// �Լ�1. �����Լ�
int main() {
	input();
	return 0;
}

// �Լ�2. ����ڷκ��� ã�� ���� �Է¹ް� �迭���� ã�� �Լ� ȣ��
void input() {
	int target;
	int arr[] = { 23, 45, 62, 12, 99, 83, 23, 50, 12, 37 };
	printf("�迭: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\nã�� ��? ");
	scanf("%d", &target);
	int index = find(arr, target);
	if (index != -1) {
		printf("%d�� %d��° �����Դϴ�.\n", target, index);
	}
	else {
		printf("�� %d�� ã�� �� �����ϴ�.\n", target);
	}
	return;
}

// �Լ�3. �迭���� ���� ã�� �ε����� ��ȯ�ϴ� �Լ�
int find(int arr[], int target) {
	for (int i = 9; i >= 0; i--) {
		if (arr[i] == target) {
			return i;
		}
	}
	return -1;
}