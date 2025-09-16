#include <stdio.h>

int main() {
	int* pi;
	double* pd;
	printf("pi�� ũ��: %d\n", sizeof(pi));
	printf("pd�� ũ��: %d\n", sizeof(pd));
	// ������ �ּ��� ũ��� ����(32bit=4B, 64bit=8B)

	int *pj = 0;
	printf("pi�� ��: %p\n", pj);
	//� �ּҷ� �ʱ�ȭ���� �𸣸� 0 or NULL�� �ʱ�ȭ
	//0������ ���� �ּ��̱� ����(=���� ���� Ȯ�� ����)

	int a = 10;
	int* pa = &a; // & : �ּ� ������
	printf("%d\n", *pa); 
	// * : ���� ���� ������(�����Ͱ� ����Ű�� ���� ��)
	*pa = 20; // * �̿��Ͽ� ���� �� ������ ����
	printf("%d\n", *pa);

	//�Լ��� ���, �Լ� �̸��� �Լ��� �ּҸ� �ǹ�

	//const ������ ���, const ��ġ�� ���� �ǹ� �ٸ�
	const int* p1; // �б� ����
	int* const p2; //Ư�� ���� ���� = �ּ� ���� �Ұ�
	//�Ӹ� ���ļ� �˰� �ֱ�

	int* p = NULL;
	int i;
	p = &i;
	printf("%p\n", p);
	p++;
	printf("%p\n", p);
	//������ ������, �ڷ��� ũ�⸸ŭ ����

	int arr[5] = { 1,2,3,4,5 }; //*(arr+5) = arr[5]
	int* pp = &arr[0]; //int* pp = arr; �� ����
	//�迭���� �迭�� ù ��° ����� �ּұ� ����
	for (int j = 0; j < 5; j++) {
		printf("%d ", *(pp + j)); //pp[j] �� ����
	}
	//arr[0]�� �ּҺ��� �ϳ��� �и�



	return 0;
}