/*
파일명: Ass04.c
내용: 물체에 작용한 힘의 크기와 이동한 거리를 입력받아 한 일의 양을 구하는 프로그램
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
	double power = 0, length = 0;

	printf("힘(N)? ");
	scanf("%lf", &power);
	printf("이동거리(m)? ");
	scanf("%lf", &length);

	printf("일의 양 : %.2lf J\n", power * length);
}