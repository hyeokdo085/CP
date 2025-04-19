/*
���ϸ�: Ass16-main.c
����: 0~255������ ���� red, green, blud�� ������ 3�� �Է¹޾�
	RGB Ʈ���÷��� ��ȯ�Ͽ� ����ϴ� ���α׷�
����: 
	1. RGB ���� 0~255 ������ ������ �Է¹޴´�.
	2. RGB ���� 0~255 ���̰� �ƴ� ��� �����÷ο�� ó���Ͽ� 
		0~255 ������ ������ ��ȯ�Ѵ�. (��: 256 -> 0, -1 -> 255)
	3. Ʈ���÷��� %06X�� BBGGRR �������� ����Ѵ�.
�ۼ���: �ȵ���
��¥: 2025.04.19
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ass0416(void);
unsigned int RGBtoTC(int red, int green, int blue);

int main(void) {
	ass0416();
	return 0;
}


/*
	�Լ���: ass0416()
	���: RGB ���� �Է¹޾� RGBtoTC() ȣ�� �� ��� ���
	�Է�: ����
	��ȯ: ����(0=����, �׿�=����)
*/
int ass0416(void) {

	// 1. RGB �� �Է¹޾� ����
	int r = 0, g = 0, b = 0; // red, green, blue
	printf("red? ");
	scanf("%d", &r);
	printf("green? ");
	scanf("%d", &g);
	printf("blue? ");
	scanf("%d", &b);

	// 2. RGBtoTC() ȣ���Ͽ� Ʈ���÷� ���
	unsigned int tc = RGBtoTC(r, g, b);

	// 3. Ʈ���÷� ���
	printf("RGB Ʈ���÷�: %06X\n", tc);

	return 0;
}


/*
	�Լ���: unsigned int RGBtoTC()
	���: RGB ���� �Է¹޾� Ʈ���÷��� ��ȯ �� ��ȯ
	�Է�: RGB ��(red, green, blue, ����)
		(0~255 ������ ���� �ƴ� ��� �����÷ο� ó��)
	��ȯ: Ʈ���÷�(unsigned int, 16����)
*/
unsigned int RGBtoTC(int red, int green, int blue) {

	// 1. RGB ���� 0~255 ���̰� �ƴ� ��� �����÷ο� ó��
	red = red % 256;
	green = green % 256;
	blue = blue % 256;

	// 2. Ʈ���÷� ���
	unsigned int tc = (blue << 16) | (green << 8) | red;

	// 3. Ʈ���÷� ��ȯ
	return tc;
}
