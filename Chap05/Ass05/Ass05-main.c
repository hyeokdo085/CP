/*
파일명: Ass05_main.c
내용: 온도를 입력 받아 화씨는 섭씨로, 섭씨는 화씨로 변환하는 프로그램
조건:
1. "27 C", "27 F" 형식으로 입력받기
2. 섭씨 = (화씨 - 32) * 5 / 9
3. 화씨 = (섭씨 * 9 / 5) + 32
작성자: 안도혁
날짜: 2025.04.23
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ass05(void);
void tempConvert(double temp, char type);

// 함수1 : 메인함수
int main() {
	ass05(); //함수 호출
	return 0;
}

// 함수2 : 온도와 형식을 입력받고, 온도 변환 함수 호출
void ass05(void) {
	double temp = 0;
	char type = ' ';
	// 1. 온도와 형식 입력받기
	printf("온도? ");
	scanf("%lf %c", &temp, &type);
	// 2. 온도 변환 함수 호출
	tempConvert(temp, type);
	return;
}

// 함수3 : 온도 변환 및 결과 출력
void tempConvert(double temp, char type) {
	double converted = 0;
	// 1. 온도 변환(화씨 -> 섭씨)
	if (type == 'F') {
		converted = (temp - 32) * 5 / 9;
		printf("%.2f F ==> %.2f C\n", temp, converted);
	}
	// 2. 온도 변환(섭씨 -> 화씨)
	else if (type == 'C') {
		converted = (temp * 9 / 5) + 32;
		printf("%.2f C ==> %.2f F\n", temp, converted);
	}
	// 3. 잘못된 형식 입력 시 오류 메시지 출력
	else {
		printf("잘못된 형식입니다.\n");
	}
	return;
}