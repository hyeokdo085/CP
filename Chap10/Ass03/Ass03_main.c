/*
���ϸ�: Ass03_main.c
����: LOGIN ����ü�� ����� �α��� ���� ���α׷�
����:
1. ���̵�� �н������ ���� �ִ� 20����
2. ���̵� �Է¹޾� LOGIN ����ü �迭���� �˻�
	���� �Է¹��� �н������ ��ϵ� �н����带 ���Ͽ� ������ �α��� ���� �޽��� ���
3. LOGIN ����ü �迭�� ũ�Ⱑ 5�� �迭�� ���� �� ������ ������ �ʱ�ȭ �� ���
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

void ass03(void);

// �Լ�1 : �����Լ�
int main() {
	ass03(); //�Լ� ȣ��
	return 0;
}

// �Լ�2 : ���̵�� �н����� �Է¹ް� ���Ͽ� �α��� ���� ���� ����ϴ� �Լ�
void ass03(void) {
	LOGIN users[5] = { // LOGIN ����ü �迭 �ʱ�ȭ
		{"guest", "idontknow"},
		{"guest2", "iknow"},
		{"guest3", "idoknow"},
		{"guset4", "youknow"},
		{"guest5", "youdontknow"}
	};

	LOGIN input; // �Է¹��� LOGIN ����ü ���� ����
	// 1. ���̵� �Է¹ޱ�(Ʋ�� ������ �ݺ�)
	while (1) {
		printf("ID? ");
		scanf("%s", input.ID);
		// 2. ���̵� �˻� �� �н����� �Է¹ޱ�
		for (int i = 0; i < 5; i++) {
			if (strcmp(users[i].ID, input.ID) == 0) { // ���̵� ��ġ�ϴ��� Ȯ��
				printf("PW? ");
				scanf("%s", input.PW);
				if (strcmp(users[i].PW, input.PW) == 0) { // �н����� ��
					printf("�α��� ����\n");
					break;
				}
				else {
					printf("��й�ȣ�� �ٸ��ϴ�.\n");
					break;
				}
				break;
			}
			else {
				return;
			}
		}
	}
}
