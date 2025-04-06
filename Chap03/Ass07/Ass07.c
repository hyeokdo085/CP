/*
파일명: Ass07.c
내용: 실수값 입력받아 그 값의 제곱과 세제곱 출력하는 프로그램(실수값 입력은 소수표기 or 지수표기 가능, 출력은 지수표기)
작성자: 안도혁
날짜: 2025.04.06
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void squareCube();

int main() {

	squareCube();
	return 0;
}

void squareCube() {
	double num = 0;

	printf("실수? ");
	scanf("%lf", &num);

	printf("제곱 : %e\n", num*num);
	printf("세제곱 : %e\n", num * num * num);
}