#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int introMe(void);

int main(void) {
	introMe();
	return 0;
}

int introMe(void) {
	char name[64]; //이름 저장 변수
	int age; //나이 저장 변수
	char hello[256]; //인사말 저장 변수

	//1. 이름, 나이, 인사말 입력
	printf("이름, 나이, 인사말을 입력하세요 : \n");
	scanf("%s %d %s", name, &age, hello);

	//2. 이름, 나이, 인사말 출력
	printf("이름 : %s, 나이 : %d \n인사말 : %s\n", name, age, hello);

	return 0;
}