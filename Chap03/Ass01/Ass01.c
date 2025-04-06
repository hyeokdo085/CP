/*
파일명: Ass01.c
내용: 한 변의 길이 입력받아 정사각형의 넓이와 둘레를 구하는 프로그램
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
	int line = 0;

	printf("한 변의 길이 ? ");
	scanf("%d", &line);

	printf("정사각형의 넓이 : %d\n", line * line);
	printf("정사각형의 둘레 : %d\n", line * 4);
}