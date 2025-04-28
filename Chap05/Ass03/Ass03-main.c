/*
파일명: Ass03_main.c
내용: 거스름돈 입력받아 오만, 만, 천, 백, 십원이 몇 개 필요한지 구하기(10원 미만 절삭)
작성자: 안도혁
날짜: 2025.04.23
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input(void);
void change(int money);

// 함수1 : 메인함수
int main() {
	input(); //함수 호출
	return 0;
}

// 함수2 : 거스름돈 입력받기
void input(void) {
	int money;
	// 1. 거스름돈 입력받기
	printf("거스름돈? : ");
	scanf("%d", &money);
	// 2. 함수 호출
	change(money);
}

// 함수3 : 거스름돈 계산하기
void change(int money) {
	int _50k = 0, _10k = 0, _1k = 0, _100 = 0, _10 = 0;
	// 1. 10원 이하 절삭 및 거스름돈 출력
	money = money - (money % 10);
	printf("거스름돈 (10원미만 절사): %d\n", money);
	// 2. 오만원권 계산 및 출력
	if (money / 50000 > 0) {
		_50k = money / 50000;
		money = money % 50000;
		printf("50000원 %d장\n", _50k);
	}
	// 3. 만원권 ~ 백원권 계산 및 출력
	if (money / 10000 > 0) {
		_10k = money / 10000;
		money = money % 10000;
		printf("10000원 %d장\n", _10k);
	}
	if (money / 1000 > 0) {
		_1k = money / 1000;
		money = money % 1000;
		printf("1000원 %d장\n", _1k);
	}
	if (money / 100 > 0) {
		_100 = money / 100;
		money = money % 100;
		printf("100원 %d개\n", _100);
	}
	if (money / 10 > 0) {
		_10 = money / 10;
		money = money % 10;
		printf("10원 %d개\n", _10);
	}
	return;
}