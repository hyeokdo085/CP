/*
파일명: Ass02.c
내용: 가로 및 세로 길이 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램
작성자: 안도혁
날짜: 2025.04.06
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void square();

int main() {

	square();
	return 0;
}

void square() {
	int x = 0, y = 0;

	printf("가로의 길이? ");
	scanf("%d", &x);
	printf("세로의 길이? ");
	scanf("%d", &y);

	printf("정사각형의 넓이 : %d\n", x*y);
	printf("정사각형의 둘레 : %d\n", 2*(x+y));
}