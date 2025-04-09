/*
파일명: Ass02-main.c
내용: 화씨 온도(F)를 실수로 입력받아 섭씨 온도(C)로 변환 후 출력하는 프로그램
작성자: 안도혁
날짜: 2025.04.09
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ass0402(void);
double FtoC(double fahrenheit);

int main(void) {
	ass0402();
	return 0;
}


/*
	함수명: ass0402()
	기능: 화씨 온도를 실수로 입력받음, 화씨를 섭씨로 변환하도록 호출, 결과 출력
	입력: 없음
	반환: 정수(0=성공, 그외=에러)
*/
int ass0402(void) {

	// 1. 화씨 온도 입력받아 저장
	double F = 0.0 ; // 화씨온도 = F
	printf("화씨 온도? ");
	scanf("%lf", &F);

	// 2. 화씨 온도 -> 섭씨 온도 변환
	double result = FtoC(F);

	// 3. 변환한 섭씨 온도 출력
	printf("%.2f F = %.2f C", F, result);
	return 0;
}


/*
	함수명: FtoC()
	기능: 화씨 온도 입력받아 섭씨 온도 변환 후 반환
	입력: 화씨 온도(F, 실수)
	반환: 섭씨 온도(C, 실수)
*/
double FtoC(double Fahrenheit) {
	double Celsius = 0.0;
	// 섭씨 = (화씨온도 - 32) * (5/9)
	Celsius = (Fahrenheit - 32) * (5.0 / 9.0);

	return Celsius;
}