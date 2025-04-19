/*
���ϸ�: Ass09-main.c
����: ����ð��� �� ������ �Է¹޾� ��, ��, �ʷ� ��ȯ�Ͽ� ����ϴ� ���α׷�
�ۼ���: �ȵ���
��¥: 2025.04.19
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ass0409(void);
void StoHMS(int sec);

int main(void) {
	ass0409();
	return 0;
}


/*
	�Լ���: ass0409()
	���: ����ð��� �� ������ �Է¹޾� StoMS() ȣ��
	�Է�: ����
	��ȯ: ����(0=����, �׿�=����)
*/
int ass0409(void) {

	// 1. ����ð��� �� ������ �Է¹޾� ����
	int s = 0; // �� = sec
	printf("����ð�(��)? ");
	scanf("%d", &s);

	// 2. StoHMS �Լ��� ȣ��
	 StoHMS(s);

	return 0;
}


/*
	�Լ���: StoHMS()
	���: �ʸ� ��, ��, �ʷ� ��ȯ�Ͽ� ���
	�Է�: ��(sec, ����)
	��ȯ: ����(���ο��� printf�� ���)
*/
void StoHMS(int sec) {
	// 1. ��, ��, �ʿ� ���� ���� ����
	int hours = 0, minutes = 0, seconds = sec;
	
	// 2. �ʸ� �÷� ��ȯ �� ���� �� ����
	hours = seconds / 3600;
	seconds = seconds % 3600;

	// 3. ���� �ʸ� ������ ��ȯ �� ���� �� ����
	minutes = seconds / 60;
	seconds = seconds % 60;

	// 4. ��, ��, �� ���(���� ������ �̿��Ͽ� 0�� ��� ����)
	printf("����ð���");
	hours == 0 ? printf("") : printf(" %d�ð�", hours);
	minutes == 0 ? printf("") : printf(" %d��", minutes);
	seconds == 0 ? printf("�Դϴ�.\n") : printf(" %d���Դϴ�.\n", seconds);
	
	return;
}