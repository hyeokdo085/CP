/*
�ǽ��� : 2025.04.16
�ۼ��� : �ȵ���
�ǽ����� : �Լ� �ǽ�
*/

#include <stdio.h>

//�Լ��� ���� ����
void f1(void);
int f3(int a, int b);

//���� �Լ�
int main() {
	int x = 3;
	f1();
	int result = f3(2, 3);
	return 1;
}

//�Լ� ���� = �Լ� ����
/*
�Լ��� : void f1(void)
��� : Hello ���
�Է� : ����
��ȯ : ����
*/
void f1(void) {
	// 1. Hello ���
	printf("�ȳ�! ���� �� �Ҿƹ�����\n");
	return;
}

/*
�Լ��� : int f3(int a, int b)
��� : �Էµ� �� �� a, b�� ���ؼ� ��ȯ
�Է� : ���� a, b
��ȯ : ���� result
*/
int f3(int a, int b) {
	// 1. �� ���� ���ؼ� ��ȯ
	int result = a + b;
	return result;
}