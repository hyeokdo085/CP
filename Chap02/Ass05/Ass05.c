/*
파일명 : Ass05.c
내용 : PA5. 몸무게를 입력받아 출력하는 프로그램 작성. 몸무게는 실수로 입력, 소수점 이하 2자리까지 출력.
작성자 : 영어교육과 202010853 안도혁
날짜 : 2025.03.25
버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void weight();

int main()
{
	weight();
	return 0;
}

void weight()
{
	float weight;
	printf("몸무게? ");
	scanf("%f", &weight);
	printf("입력한 몸무게는 %.2fKG입니다.", weight);
}