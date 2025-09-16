/*
���ϸ�: Ass18_main.c
���̵�: ��
����: �ִ� 10���� ������ ���� ���� ������ ����(set) �ڷᱸ�� ����
����:
1. ������ �ߺ� ��� ����
2. ������ �Է� ������ ������ ���ҷ� �߰� �� ���� ��ü ���
3. �̹� �����ϴ� ���� �߰��� "�ش� ���Ұ� �̹� [�ε���]�� �����մϴ�." ���
�ۼ���: �ȵ���
��¥: 2025.09.16
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input();
int add(int target, int arr[]);

// �Լ�1. �����Լ�
int main() {
	input();
	return 0;
}

// �Լ�2. ����ڷκ��� ���� �Է¹ް� ���տ� �߰��ϴ� �Լ� ȣ��
void input() {
	int arr[10] = { 0 }; // ���� �ʱ�ȭ
	while (1) {
		int target;
		printf("�迭�� �߰��� ����? ");
		scanf("%d", &target);
		add(target, arr);
		if (arr[9] != 0) {
			printf("������ ���� á���ϴ�. �� �̻� ���Ҹ� �߰��� �� �����ϴ�.\n");
			break;
		}
	}
	return;
}

// �Լ�3. ���տ� ���Ҹ� �߰��ϰ� ��ü ���Ҹ� ����ϴ� �Լ�
int add(int target, int arr[]) {
	for (int i = 0; i < 10; i++) {
		if (arr[i] == target) {
			printf("�ش� ���Ұ� �̹� [%d]�� �����մϴ�.\n", i);
			for (int j = 0; j < 10; j++) {
				if (arr[j] != 0) {
					printf("%d ", arr[j]);
				}
			}
			printf("\n");
			return -1;
		}
		if (arr[i] == 0) {
			arr[i] = target;
			for (int j = 0; j < 10; j++) {
				if (arr[j] != 0) {
					printf("%d ", arr[j]);
				}
			}
			printf("\n");
			return i;
		}
	}
	return -1; // ������ ���� á�� ��
}