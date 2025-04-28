/*
파일명: Ass09_main.c
내용: 햄버거 가게의 계산서 프로그램
조건:
1. 햄버거=4000원, 콜라=1500원, 감자튀김=2000원
2. 햄버거+콜라+감자튀김 모두 주문시 세트로 묶여=6500원
3. 2번의 예시: 햄버거2, 콜라1, 감자튀김3 = 세트1, 햄버거1, 감자튀김2
작성자: 안도혁
날짜: 2025.04.23
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ass09(void);
int setConvert(int B, int C, int F);

// 함수1 : 메인함수
int main() {
	ass09(); //함수 호출
	return 0;
}

// 함수2 : 햄버거, 콜라, 감자튀김 개수 입력받고 세트 변환 함수 호출, 결과 출력
void ass09(void) {
	int burger = 0, cola = 0, fries = 0, set = 0;
	// 1. 햄버거, 콜라, 감자튀김 개수 입력받기
	printf("햄버거 개수? ");
	scanf("%d", &burger);
	printf("콜라 개수? ");
	scanf("%d", &cola);
	printf("감자튀김 개수? ");
	scanf("%d", &fries);
	// 2. 세트 변환 함수 호출
	set = setConvert(burger, cola, fries);
	// 3. 기존 개수에서 세트 개수 빼기
	burger = burger - set;
	cola = cola - set;
	fries = fries - set;
	// 4. 가격 책정
	int setP = set * 6500, 
		burgerP = burger * 4000, 
		colaP = cola * 1500, 
		friesP = fries * 2000,
		totalP = setP + burgerP + colaP + friesP;
	// 5. 결과 출력
	printf(
		"상품명 		단가	수량	금액\n"
	);
	if (set > 0) {
		printf("세트		6500	%d	%d\n", set, setP);
	}
	if (burger > 0) {
		printf("햄버거		4000	%d	%d\n", burger, burgerP);
	}
	if (cola > 0) {
		printf("콜라		1500	%d	%d\n", cola, colaP);
	}
	if (fries > 0) {
		printf("감자튀김	2000	%d	%d\n", fries, friesP);
	}
	printf("--------------------------------------\n"
	);
	printf("합계				%d", totalP);
	return;
}

// 함수3 : 세트 변환
int setConvert(int B, int C, int F) {
	int set = 0;
	// 1. 세트 개수 계산
	if (B >= 1 && C >= 1 && F >= 1) {
		set = B;
		if (C < set) {
			set = C;
		}
		if (F < set) {
			set = F;
		}
	}
	return set;
}