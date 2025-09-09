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
	printf("나는 안도혁입니다");
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
Me me = { "안도혁", 25, "010-4120-2532" };

// 3
//입력: 두 int, 반환: 가장 큰 int, 함수 내 출력
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
	printf("가장 큰 값인 %d를 반환합니다.\n", max);
	return max;
}

// 4
//입력: 10진수 int, 반환값 없음, 함수 내 출력
void print_2_8_16(int num) {
	printf("10진수: %d\n", num);

	printf("2진수: ");
	int bits[32]; // 32비트 정수형
	int index = 0; // bits 배열의 인덱스
	int numFor2 = num; //기존 num값은 따로 저장
	if (numFor2 == 0) {
		printf("0");
	}
	else {
		while (numFor2 > 0) {
			bits[index] = numFor2 % 2; // 2로 나눈 나머지를 index 위치에 저장
			numFor2 = numFor2 / 2; // numFor2를 2로 나눈 몫으로 갱신
			index++; // index 증가
		}
		for (int i = index - 1; i >= 0; i--) { // bits 배열의 역순으로 출력
			printf("%d", bits[i]);
		}
	}

	printf("\n8진수: %o \n", num);

	printf("16진수: %X \n", num);
	return;
}

// 5
//입력: 두 int, 반환값 없음, 함수 내 출력
void addAtoB(int n, int m) {
	int sum = 0;
	if (m < n) { //예외처리
		printf("m이 n보다 작습니다.\n");
	}
	for (int i = n; i <= m; i++) { //1씩 증가하며
		sum += i; //합산
	}
	printf("%d부터 %d까지 합: %d\n", n, m, sum);
	return;
}

// 6
//입력: int, 반환: 각 자리수 합 int, 출력 없음
int add_digit(int num) {
	int result = 0;
	for (int i = 10; num != 0; num /= i) { //10으로 나누며 각 자리수 추출
		result += (num % i); //각 자리수 합산
	}
	return result;
}

//7
//입력: 문자열, 문자, 반환: 찾은 개수 int, 함수 내 출력
int find_char(char str[], char c) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) { //문자열 끝(\0)까지
		if (str[i] == c) { //문자와 같으면
			printf("%d ", i); //인덱스 출력하고
			count++; //개수 증가
		}
	}
	printf("\n");
	return count;
}

// 8
//입력: 두 int, 반환: 두 int 사이 홀수 합 int, 함수 내 출력 없음
int add_odd_only(int a, int b) {
	int sum = 0;
	if (b < a) { //예외처리
		printf("b가 a보다 작습니다.\n");
		return -1;
	}
	for (int i = a; i <= b; i++) {
		if (i % 2 == 1) { //홀수이면
			sum += i; //합산
		}
	}
	return sum;
}

// 9
// 입력: 3x3 행렬 2개, 반환: 3x3 행렬 1개
//반환값으로 배열 반환 불가하므로, 구조체 사용
typedef struct {
	int data[3][3];
}mat;

mat matrix_add(mat a, mat b) {
	mat result; //결과 행렬
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) { //이중 반복으로 행렬 구현
			result.data[i][j] = a.data[i][j] + b.data[i][j]; //각 원소 합산
		}
	}
	return result;
}

// 10
// 입력: 학번 문자열, 반환: 입학년도 int
int get_year(char id[]) {
	int year;
	year = (id[0] - '0') * 1000 //아스키 코드 값 활용
		+ (id[1] - '0') * 100
		+ (id[2] - '0') * 10
		+ (id[3] - '0');
	return year;
}

// 11
// 구상 : 메인함수, 연락처 입력받고 저장 및 목록 반환하는 함수, 입력된 연락처 목록을 출력하는 함수.
// 함수1= 입력값 없음, 반환값=연락처 목록, 함수 내 스캔으로 연락처 저장.
// 함수2= 입력값=연락처 목록, 반환값 없음, 함수 내 프린트로 연락처 출력.
// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>
// #include <string.h>

#define MAX_CNT 100 //최대 연락처 개수
typedef struct { //연락처 구조체
	char name[5];
	int age;
	char phone[15];
} Cont;
Cont cont_list[MAX_CNT]; //연락처 목록
void input_cont(); //연락처 입력 함수
void print_cont(Cont list[]); //연락처 출력 함수

int main() {
	input_cont();
	print_cont(cont_list);
	return 0;
}

void input_cont() {
	while (1) {
		printf("이름? 나이? 전화번호? (예: 홍길동 20 010-0000-0000)\n");
		printf("입력을 중단하려면 이름 혹은 나이에 '0' 입력\n");
		Cont temp; //임시 연락처(입력 중단 판단용)
		scanf("%s %d %s", temp.name, &temp.age, temp.phone);
		if (strcmp(temp.name, "0") == 0 || temp.age == 0) { //이름 혹은 나이가 0이면 중단
			break;
		}
		else {
			int i;
			for (i = 0; i < MAX_CNT; i++) { //빈 칸에 저장
				if (cont_list[i].age == 0) { //나이가 0이면 빈 칸
					cont_list[i] = temp; //임시 연락처를 연락처에 저장
					break;
				}
			}
		}
	}
	return;
}

void print_cont(Cont list[]) {
	printf("\n<연락처 목록>\n");
	for (int i = 0; i < MAX_CNT; i++) {
		if (list[i].age != 0) { //빈 칸이 아니면 출력
			printf("이름: %s, 나이: %d, 전화번호: %s\n",
				list[i].name, list[i].age, list[i].phone);
		}
	}
	return;
}