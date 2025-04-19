/*
파일명: Ass16-main.c
내용: 0~255사이의 값을 red, green, blud의 순서로 3개 입력받아
	RGB 트루컬러로 변환하여 출력하는 프로그램
조건: 
	1. RGB 값은 0~255 사이의 정수로 입력받는다.
	2. RGB 값이 0~255 사이가 아닐 경우 오버플로우로 처리하여 
		0~255 사이의 값으로 변환한다. (예: 256 -> 0, -1 -> 255)
	3. 트루컬러는 %06X로 BBGGRR 형식으로 출력한다.
작성자: 안도혁
날짜: 2025.04.19
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ass0416(void);
unsigned int RGBtoTC(int red, int green, int blue);

int main(void) {
	ass0416();
	return 0;
}


/*
	함수명: ass0416()
	기능: RGB 값을 입력받아 RGBtoTC() 호출 후 결과 출력
	입력: 없음
	반환: 정수(0=성공, 그외=에러)
*/
int ass0416(void) {

	// 1. RGB 값 입력받아 저장
	int r = 0, g = 0, b = 0; // red, green, blue
	printf("red? ");
	scanf("%d", &r);
	printf("green? ");
	scanf("%d", &g);
	printf("blue? ");
	scanf("%d", &b);

	// 2. RGBtoTC() 호출하여 트루컬러 계산
	unsigned int tc = RGBtoTC(r, g, b);

	// 3. 트루컬러 출력
	printf("RGB 트루컬러: %06X\n", tc);

	return 0;
}


/*
	함수명: unsigned int RGBtoTC()
	기능: RGB 값을 입력받아 트루컬러로 변환 후 반환
	입력: RGB 값(red, green, blue, 정수)
		(0~255 사이의 값이 아닐 경우 오버플로우 처리)
	반환: 트루컬러(unsigned int, 16진수)
*/
unsigned int RGBtoTC(int red, int green, int blue) {

	// 1. RGB 값이 0~255 사이가 아닐 경우 오버플로우 처리
	red = red % 256;
	green = green % 256;
	blue = blue % 256;

	// 2. 트루컬러 계산
	unsigned int tc = (blue << 16) | (green << 8) | red;

	// 3. 트루컬러 반환
	return tc;
}
