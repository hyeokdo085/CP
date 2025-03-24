/*
파일명 : Ass07.c
내용 : PA7. 커피 사이즈(S, T, G)와 주문 수량 입력받아 출력하는 프로그램 작성. 커피 사이즈는 S, T, G 문자 중 하나로 입력.
작성자 : 영어교육과 202010853 안도혁
날짜 : 2025.03.25
버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void order();

int main()
{
	order();
	return 0;
}

void order()
{
	char size;
	int num;
	printf("커피 사이즈(S,T,G)와 주문 수량? ");
	scanf("%c %d", &size, &num);
	printf("%c 사이즈 %d잔을 주문합니다.", size, num);
}