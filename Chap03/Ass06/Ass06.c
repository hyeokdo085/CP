/*
파일명: Ass06.c
내용: 아파트 면적을 제곱미터로 입력받아 몇 평인지 출력하는 프로그램(이름 있는 상수 사용)
작성자: 안도혁
날짜: 2025.04.06
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PYEONG 0.3025

void apt();

int main() {

	apt();
	return 0;
}

void apt() {
	double area = 0;

	printf("아파트의 면적(제곱미터)? ");
	scanf("%lf", &area);

	printf("%.2lf 제곱미터 = %.2lf 평\n", area, area*PYEONG);
}