#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int cal_max(int a, int b);
void print_2_8_16(int num);
void addAtoB(int n, int m);
int add_digit(int num);
int find_char(char str[], char c);
int add_odd_only(int a, int b);
int get_year(char id[]);

// 1
void name();

int main() {
	name();
	return 0;
} 

void name() {
	printf("���� �ȵ����Դϴ�");
	return;
}

// 2.1
int a = 5;
// 2.2
float b = 2.14;
// 2.3
char Hello[] = "Hello";
int nums[] = {1,2,3,4};
// 2.4
char ABCD[4][10] = {
"Apple",
"Banana",
"Cherry",
"Durian"
};
// 2.5
#define pie1 3.141592
const float pie2 = 3.141592;
// 2.6
typedef struct {
	char name[10];
	int age;
	char del[15];
} Me;
Me me = { "�ȵ���", 25, "010-4120-2532" };

// 3
//�Է�: �� int, ��ȯ: ���� ū int, �Լ� �� ���
int cal_max(int a, int b) {
	int x, y, z, max;
	x = a + b;
	y = a << b;
	z = a * b;
	printf("a + b = %d\n", x);
	printf("a << b = %d\n", y);
	printf("a * b = %d\n", z);
	if (x > y) {
		if (x > z) {
			max = x;
		}
		else {
			max = z;
		}
	}
	else {
		if (y > z) {
			max = y;
		}
		else {
			max = z;
		}
	}
	printf("���� ū ���� %d�� ��ȯ�մϴ�.\n", max);
	return max;
}

// 4
//�Է�: 10���� int, ��ȯ�� ����, �Լ� �� ���
void print_2_8_16(int num) {
	printf("10����: %d\n", num);

	printf("2����: ");
	int bits[32]; // 32��Ʈ ������
	int index = 0; // bits �迭�� �ε���
	int numFor2 = num; //���� num���� ���� ����
	if (numFor2 == 0) {
		printf("0");
	}
	else {
		while (numFor2 > 0) {
			bits[index] = numFor2 % 2; // 2�� ���� �������� index ��ġ�� ����
			numFor2 = numFor2 / 2; // numFor2�� 2�� ���� ������ ����
			index++; // index ����
		}
		for (int i = index - 1; i >= 0; i--) { // bits �迭�� �������� ���
			printf("%d", bits[i]);
		}
	}

	printf("\n8����: %o \n", num);

	printf("16����: %X \n", num);
	return;
}

// 5
//�Է�: �� int, ��ȯ�� ����, �Լ� �� ���
void addAtoB(int n, int m) {
	int sum = 0;
	if (m < n) { //����ó��
		printf("m�� n���� �۽��ϴ�.\n");
	}
	for (int i = n; i <= m; i++) { //1�� �����ϸ�
		sum += i; //�ջ�
	}
	printf("%d���� %d���� ��: %d\n", n, m, sum);
	return;
}

// 6
//�Է�: int, ��ȯ: �� �ڸ��� �� int, ��� ����
int add_digit(int num) {
	int result = 0;
	for (int i = 10; num != 0; num /= i) { //10���� ������ �� �ڸ��� ����
		result += (num % i); //�� �ڸ��� �ջ�
	}
	return result;
}

//7
//�Է�: ���ڿ�, ����, ��ȯ: ã�� ���� int, �Լ� �� ���
int find_char(char str[], char c) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) { //���ڿ� ��(\0)����
		if (str[i] == c) { //���ڿ� ������
			printf("%d ", i); //�ε��� ����ϰ�
			count++; //���� ����
		}
	}
	printf("\n");
	return count;
}

// 8
//�Է�: �� int, ��ȯ: �� int ���� Ȧ�� �� int, �Լ� �� ��� ����
int add_odd_only(int a, int b) {
	int sum = 0;
	if (b < a) { //����ó��
		printf("b�� a���� �۽��ϴ�.\n");
		return -1;
	}
	for (int i = a; i <= b; i++) {
		if (i % 2 == 1) { //Ȧ���̸�
			sum += i; //�ջ�
		}
	}
	return sum;
}

// 9
// �Է�: 3x3 ��� 2��, ��ȯ: 3x3 ��� 1��
//��ȯ������ �迭 ��ȯ �Ұ��ϹǷ�, ����ü ���
typedef struct {
	int data[3][3];
}mat;

mat matrix_add(mat a, mat b) {
	mat result; //��� ���
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) { //���� �ݺ����� ��� ����
			result.data[i][j] = a.data[i][j] + b.data[i][j]; //�� ���� �ջ�
		}
	}
	return result;
}

// 10
// �Է�: �й� ���ڿ�, ��ȯ: ���г⵵ int
int get_year(char id[]) {
	int year;
	year = (id[0] - '0') * 1000 //�ƽ�Ű �ڵ� �� Ȱ��
		+ (id[1] - '0') * 100
		+ (id[2] - '0') * 10
		+ (id[3] - '0');
	return year;
}

// 11
// ���� : �����Լ�, ����ó �Է¹ް� ���� �� ��� ��ȯ�ϴ� �Լ�, �Էµ� ����ó ����� ����ϴ� �Լ�.
// �Լ�1= �Է°� ����, ��ȯ��=����ó ���, �Լ� �� ��ĵ���� ����ó ����.
// �Լ�2= �Է°�=����ó ���, ��ȯ�� ����, �Լ� �� ����Ʈ�� ����ó ���.
// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <string.h>

#define MAX_CNT 100 //�ִ� ����ó ����
typedef struct { //����ó ����ü
	char name[5];
	int age;
	char phone[15];
} Cont;
Cont cont_list[MAX_CNT]; //����ó ���
void input_cont(); //����ó �Է� �Լ�
void print_cont(Cont list[]); //����ó ��� �Լ�

int main() {
	input_cont();
	print_cont(cont_list);
	return 0;
}

void input_cont() {
	while (1) {
		printf("�̸�? ����? ��ȭ��ȣ? (��: ȫ�浿 20 010-0000-0000)\n");
		printf("�Է��� �ߴ��Ϸ��� �̸� Ȥ�� ���̿� '0' �Է�\n");
		Cont temp; //�ӽ� ����ó(�Է� �ߴ� �Ǵܿ�)
		scanf("%s %d %s", temp.name, &temp.age, temp.phone);
		if (strcmp(temp.name, "0") == 0 || temp.age == 0) { //�̸� Ȥ�� ���̰� 0�̸� �ߴ�
			break;
		}
		else {
			int i;
			for (i = 0; i < MAX_CNT; i++) { //�� ĭ�� ����
				if (cont_list[i].age == 0) { //���̰� 0�̸� �� ĭ
					cont_list[i] = temp; //�ӽ� ����ó�� ����ó�� ����
					break;
				}
			}
		}
	}
	return;
}

void print_cont(Cont list[]) {
	printf("\n<����ó ���>\n");
	for (int i = 0; i < MAX_CNT; i++) {
		if (list[i].age != 0) { //�� ĭ�� �ƴϸ� ���
			printf("�̸�: %s, ����: %d, ��ȭ��ȣ: %s\n",
				list[i].name, list[i].age, list[i].phone);
		}
	}
	return;
}