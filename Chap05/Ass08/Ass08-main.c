/*
파일명: Ass08_main.c
내용: 비트 연산을 수행하는 계산기 프로그램
조건:
1. 입력받을 때 10진수, 8진수, 16진수를 사용 가능
2. 입력받을 때 16진수는 0x로 시작
3. 비트 연산자: AND, OR, XOR 사용
4. 출력할 때, 16진수로 출력
작성자: 안도혁
날짜: 2025.04.23
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ass08(void);
int bitCal(int num1, int num2, char oper);

// 함수1 : 메인함수
int main() {
	ass08(); //함수 호출
	return 0;
}

// 함수2 : 정수 2개와 연산자 입력받고 비트 연산 함수 호출하고, 결과 출력
void ass08(void) {
	int num1 = 0, num2 = 0;
	char oper = ' ';
	// 1. 정수 2개와 연산자 입력받기
	printf("비트 연산식? ");
	scanf("%i %c %i", &num1, &oper, &num2);
	// 2. 비트 연산 함수 호출
	int result = bitCal(num1, num2, oper);
	// 3. 결과 출력
	printf("%X %c %X = %X\n", num1, oper, num2, result);
	return;
}

// 함수3 : 비트 연산
int bitCal(int num1, int num2, char oper) {
	int result = 0;
	// 1. 비트 연산 수행
	switch (oper) {
	case '&':
		result = num1 & num2; // AND
		break;
	case '|':
		result = num1 | num2; // OR
		break;
	case '^':
		result = num1 ^ num2; // XOR
		break;
	default:
		printf("잘못된 연산자입니다.\n");
		break;
	}
	return result;
}