/*
파일명 : Ass10.c
내용 : PA10. 정수를 8, 10, 16진수 중 하나로 입력받아, 8,10,16진수 각각 얼마에 해당하는지 출력하는 프로그램 작성.
작성자 : 영어교육과 202010853 안도혁
날짜 : 2025.03.25
버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void converter();

int main()
{
	converter();
	return 0;
}

void converter()
{
	int num;
	printf("8진수로 입력하려면 012, 16진수로 입력하려면 0x12처럼 입력하세요.\n정수? ");
	scanf("%i", &num);
	printf("8진수 : 0%o\n", num);
	printf("10진수 : %d\n", num);
	printf("16진수 : %#x\n", num);
}