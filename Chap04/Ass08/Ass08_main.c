/*
파일명: Ass08-main.c
내용: 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램 (파이=3.141592)
작성자: 안도혁
날짜: 2025.04.09
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ass0408(void);
double ballVolume(double radius);

int main(void) {
	ass0408();
	return 0;
}


/*
	함수명: ass0408()
	기능: 원의 반지름을 실수로 입력받음, 구의 부피를 계산하도록 호출, 결과 출력
	입력: 없음
	반환: 정수(0=성공, 그외=에러)
*/
int ass0408(void) {

	// 1. 원의 반지름 입력받아 저장
	double r = 0.0; // 반지름 = r
	printf("반지름의 길이? ");
	scanf("%lf", &r);

	// 2. 반지름 -> 구의 부피 계산
	double result = ballVolume(r);

	// 3. 계산한 구의 부피 출력
	printf("반지름이 %.2f 인 구의 부피 : %.6f", r, result);
	return 0;
}


/*
	함수명: ballVolume()
	기능: 반지름 입력받아 구의 부피 계산 후 반환
	입력: 반지름(r, 실수)
	반환: 구의 부피(Volume, 실수, 소수점 6자리)
*/
double ballVolume(double radius) {
	double volume = 0.0;
	double PI = 3.141592;
	// 구의 부피 = 4/3 * 파이 * 반지름^3
	volume = (4.0 / 3.0) * PI * radius * radius * radius;

	return volume;
}