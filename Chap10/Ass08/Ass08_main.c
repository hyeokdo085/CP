/*
���ϸ�: Ass08_main.c
����: Ŀ�Ǽ󿡼� �ǸŵǴ� ��ǰ ������ ��Ÿ���� PRODUCT ����ü
����:
1. �� ��ǰ���� ��ǰ��, ����, ��� ����(��ǰ���� ��ĭ ���� �� �ܾ�)
2. PRODUCT ����ü�� �Ű������� ���޹޾� ��ǰ ������ ����ϴ� print_product �Լ� �ۼ�
3. ��ǰ��, ����, ��� �Է¹޾� �����ϰ� ���
�ۼ���: �ȵ���
��¥: 2025.06.07
����: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct product {
	char name[20]; // ��ǰ��
	int price;     // ����
	int stock;     // ���
} PRODUCT;

void ass08(void);
void print_product(PRODUCT p);

// �Լ�1 : �����Լ�
int main() {
	ass08(); //�Լ� ȣ��
	return 0;
}

// �Լ�2 : ��ǰ ������ �Է¹ް� ����ϴ� �Լ�
void ass08(void) {
	PRODUCT p; // PRODUCT ����ü ���� ����
	// 1. ��ǰ��, ����, ��� �Է¹ޱ�
	printf("��ǰ��? ");
	scanf("%s", p.name);
	printf("����? ");
	scanf("%d", &p.price);
	printf("���? ");
	scanf("%d", &p.stock);
	// 2. ��ǰ ���� ����ϱ�
	print_product(p);
	return;
}

// �Լ�3 : PRODUCT ����ü�� �Ű������� �޾� ��ǰ ������ ����ϴ� �Լ�
void print_product(PRODUCT p) {
	printf("[%s %d�� ���:%d]\n", p.name, p.price, p.stock);
	return;
}
