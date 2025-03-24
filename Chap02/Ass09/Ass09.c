/*
파일명 : Ass09.c
내용 : PA9. 16진수 정수를 입력받아 10진수로 출력하는 프로그램 작성.
작성자 : 영어교육과 202010853 안도혁
날짜 : 2025.03.25
버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void HtoD();

int main()
{
	HtoD();
	return 0;
}

void HtoD()
{
	int hex;
	printf("16진수 정수? ");
	scanf("%x", &hex);
	printf("16진수 %x는 10진수로 %d입니다.", hex, hex);
}