/*
���ϸ�: Ass01_main.c
����: ���̵�� �н����� ������ ���� LOGIN ����ü
����:
1. ���̵�� �н������ ���� �ִ� 20����
2. ���̵�� �н����带 �Է� �޾� ����, ���
3. �н����� ��� ��, ��ǥ(*)�� ���
�ۼ���: �ȵ���
��¥: 2025.06.07
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct login {
	char ID[20]; // ���̵�
	char PW[20]; // �н�����
} LOGIN;

void ass01(void);

// �Լ�1 : �����Լ�
int main() {
	ass01(); //�Լ� ȣ��
	return 0;
}

// �Լ�2 : ���̵�� �н����� �Է¹ް� ����ϴ� �Լ�
void ass01(void) {
	LOGIN user; // LOGIN ����ü ���� ����
	// 1. ���̵�� �н����� �Է¹ޱ�
	printf("ID? ");
	scanf("%s", user.ID);
	printf("Password? ");
	scanf("%s", user.PW);
	// 2. ���̵�� �н����� ����ϱ�
	printf("ID: %s\n", user.ID);
	printf("PW: ");
	for (int i = 0; (i < 20) && (user.PW[i] != '\0'); i++) {
		printf("*");
	}
	return;
}

