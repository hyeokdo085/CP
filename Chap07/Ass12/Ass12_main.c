/*
���ϸ�: Ass12_main.c
���̵�: ��
����: ����ǥ ���� ���α׷�
����: 
1. �¼��� 10���� ����
2. ������ �¼����� �Է¹޾� ���ڸ� �տ������� ä��
3. ������ ������ �� �¼��� ���� ���
4. �¼� ���´� O(���� ����)�� X(���� �Ұ�)�� ǥ��
5. ���� �Ұ��� ��� ���α׷� ����
�ۼ���: �ȵ���
��¥: 2025.09.16
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input();
void reserve(int num, char seats[]);

// �Լ�1. �����Լ�
int main() {
	input();
	return 0;
}

// �Լ�2. ����ڷκ��� ������ �¼����� �Է¹ް� ���� �Լ� ȣ��
void input() {
	char seats[10] = { 'O','O','O','O','O','O','O','O','O','O' }; // �¼� �ʱ�ȭ
	while (1) {
		printf("���� �¼�: ");
		for (int i = 0; i < 10; i++) {
			printf("%c ", seats[i]);
		}
		printf("\n������ �¼���? ");
		int num;
		scanf("%d", &num);
		reserve(num, seats);
		if (seats[9] == 'X') {
			printf("�¼��� ���� á���ϴ�. ���α׷��� �����մϴ�.\n");
			return;
		}
	}
	return;
}

// �Լ�3. �¼��� �����ϰ� �迭�� �����ϴ� �Լ�
void reserve(int num, char seats[]) {
	int count = 0;
	for (int i = 0; i < 10; i++) {
		if (seats[i] == 'O') {
			seats[i] = 'X';
			count++;
			printf("%d ", i + 1);
			if (count == num) {
				printf("�� �¼��� �����߽��ϴ�.\n");
				break;
			}
		}
	}
	if (count < num) {
		printf("�� �¼��� ���� %d�� ������ �Ұ��մϴ�. \n", num);
		exit(0);
	}
	return;
}