/*
파일명: Ass03.c
내용: 질량 및 높이 입력받아 위치 에너지를 구하는 프로그램
작성자: 안도혁
날짜: 2025.04.06
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void energy();

int main() {

	energy();
	return 0;
}

void energy() {
	double weight = 0, height = 0;

	printf("질량(kg)? ");
	scanf("%lf", &weight);
	printf("높이(m)? ");
	scanf("%lf", &height);

	printf("위치에너지 : %.6lf J\n", 9.8*weight*height);
}