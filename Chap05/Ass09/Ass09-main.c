/*
���ϸ�: Ass09_main.c
����: �ܹ��� ������ ��꼭 ���α׷�
����:
1. �ܹ���=4000��, �ݶ�=1500��, ����Ƣ��=2000��
2. �ܹ���+�ݶ�+����Ƣ�� ��� �ֹ��� ��Ʈ�� ����=6500��
3. 2���� ����: �ܹ���2, �ݶ�1, ����Ƣ��3 = ��Ʈ1, �ܹ���1, ����Ƣ��2
�ۼ���: �ȵ���
��¥: 2025.04.23
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ass09(void);
int setConvert(int B, int C, int F);

// �Լ�1 : �����Լ�
int main() {
	ass09(); //�Լ� ȣ��
	return 0;
}

// �Լ�2 : �ܹ���, �ݶ�, ����Ƣ�� ���� �Է¹ް� ��Ʈ ��ȯ �Լ� ȣ��, ��� ���
void ass09(void) {
	int burger = 0, cola = 0, fries = 0, set = 0;
	// 1. �ܹ���, �ݶ�, ����Ƣ�� ���� �Է¹ޱ�
	printf("�ܹ��� ����? ");
	scanf("%d", &burger);
	printf("�ݶ� ����? ");
	scanf("%d", &cola);
	printf("����Ƣ�� ����? ");
	scanf("%d", &fries);
	// 2. ��Ʈ ��ȯ �Լ� ȣ��
	set = setConvert(burger, cola, fries);
	// 3. ���� �������� ��Ʈ ���� ����
	burger = burger - set;
	cola = cola - set;
	fries = fries - set;
	// 4. ���� å��
	int setP = set * 6500, 
		burgerP = burger * 4000, 
		colaP = cola * 1500, 
		friesP = fries * 2000,
		totalP = setP + burgerP + colaP + friesP;
	// 5. ��� ���
	printf(
		"��ǰ�� 		�ܰ�	����	�ݾ�\n"
	);
	if (set > 0) {
		printf("��Ʈ		6500	%d	%d\n", set, setP);
	}
	if (burger > 0) {
		printf("�ܹ���		4000	%d	%d\n", burger, burgerP);
	}
	if (cola > 0) {
		printf("�ݶ�		1500	%d	%d\n", cola, colaP);
	}
	if (fries > 0) {
		printf("����Ƣ��	2000	%d	%d\n", fries, friesP);
	}
	printf("--------------------------------------\n"
	);
	printf("�հ�				%d", totalP);
	return;
}

// �Լ�3 : ��Ʈ ��ȯ
int setConvert(int B, int C, int F) {
	int set = 0;
	// 1. ��Ʈ ���� ���
	if (B >= 1 && C >= 1 && F >= 1) {
		set = B;
		if (C < set) {
			set = C;
		}
		if (F < set) {
			set = F;
		}
	}
	return set;
}