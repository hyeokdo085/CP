/*
파일명 : Ass11.c
내용 : PA11. 파이 값을 여러 방법으로 출력하는 프로그램 작성. 소수점 이하 2자리, 4자리, 6자리, 8자리, 지수표기 등으로 출력.
작성자 : 영어교육과 202010853 안도혁
날짜 : 2025.03.25
버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pi();

int main()
{
	pi();
	return 0;
}

void pi()
{
	double pi = 3.14159265358979323846;
	printf("pi = %.2f\n", pi);
	printf("pi = %.4f\n", pi);
	printf("pi = %.6f\n", pi);
	printf("pi = %.8f\n", pi);
	printf("pi = %e\n", pi);
}