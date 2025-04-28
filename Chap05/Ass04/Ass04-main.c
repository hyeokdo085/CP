/*
파일명: Ass04_main.c
내용: 연도를 입력받아 윤년인지 검사하는 프로그램
조건:
1. 4로 나누어 떨어지면 윤년
2. 1에 만족하나, 100으로 나누어 떨어지면 윤년X
3. 2에 만족하나, 400으로 나누어 떨어지면 윤년
작성자: 안도혁
날짜: 2025.04.23
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ass04(void);
int leapYear(int year);

// 함수1 : 메인함수
int main() {
	ass04(); //함수 호출
	return 0;
}

// 함수2 : 연도 입력받고, 윤년 검사 함수 호출 및 결과 출력
void ass04(void) {
	int year = 0, leap = 0;
	// 1. 연도 입력받기
	printf("연도? ");
	scanf("%d", &year);
	// 2. 윤년 검사 함수 호출
	leap = leapYear(year);
	// 3. 결과 출력
	if (leap == 1) {
		printf("%d년은 윤년입니다.\n", year);
	}
	else {
		printf("%d년은 윤년이 아닙니다.\n", year);
	}
	return;
}

// 함수3 : 윤년 검사
int leapYear(int year) {
	// 1. 윤년 검사
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				return 1; // 윤년
			}
			else {
				return 0; // 윤년X
			}
		}
		else {
			return 1; // 윤년
		}
	}
	else {
		return 0; // 윤년X
	}
}