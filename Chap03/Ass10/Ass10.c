/*
파일명: Ass10.c
내용: 원/달러 환율과 달러 입력받아 몇 원인지 출력하는 프로그램
작성자: 안도혁
날짜: 2025.04.06
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exchange();

int main() {

	exchange();
	return 0;
}

void exchange() {
	double doller = 0;
	double rate = 0;

	printf("USD? ");
	scanf("%lf", &doller);
	printf("원/달러 환율? ");
	scanf("%lf", &rate);

	printf("USD %.2lf = KRW %.2lf\n", doller, doller*rate);
}