/*
파일명: Ass17_main.c
내용: 주차 시간을 분으로 입력받아 주차 요금을 계산해서 출력하는 프로그램
조건:
1. 최초 30분 2000원, 그 이후 10분당 1000원
2. 하루 최대 25000원을 넘을 수 없다.
3. 하루 최대 24시간을 넘을 수 없다.
4. 1분 단위는 10분으로 올림 계산
작성자: 안도혁
날짜: 2025.04.23
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ass17(void);
void parkFee(int time);

// 함수1 : 메인함수
int main() {
	ass17(); //함수 호출
	return 0;
}

// 함수2 : 주차 시간 입력받고 요금 계산 함수 호출
void ass17(void) {
	int time = 0;
	// 1. 주차 시간 입력받기
	printf("주차 시간(분)? ");
	scanf("%d", &time);
	// 2. 최대 24시간 검사
	if (time > 24 * 60) {
		printf("주차 시간은 최대 24시간(1440분)을 넘을 수 없습니다.\n");
		return;
	}
	// 3. 요금 계산 함수 호출
	parkFee(time);
	return;
}

// 함수3 : 주차 요금 계산 및 결과 출력
void parkFee(int time) {
	int fee = 0;
	// 1. 최초 30분 요금 계산
	if (time <= 30) {
		fee = 2000;
	}
	// 2. 최대 요금 계산
	else if (time >= 260) {
		fee = 25000;
	}
	// 3. 30분 초과, 25000원 미만 요금 계산
	else {
		if (time % 10 > 0) {
			time = time + (10 - (time % 10)); // 10분 단위로 올림
		}
		fee = 2000 + ((time - 30) / 10) * 1000;
	}
	// 4. 결과 출력
	printf("주차 요금: %d원\n", fee);
}