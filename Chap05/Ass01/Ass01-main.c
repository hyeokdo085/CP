/*
파일명: Ass01_main.c
내용: 점의 좌표 x,y를 입력받아 영역 내 점인지 검사하는 프로그램
조건: 좌상단에서 우하단으로 갈 수록 좌표값이 증가함(left<right, top<bottom)
작성자: 안도혁
날짜: 2025.04.23
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ass01(void);
int squareCheck(int left, int top, int right, int bottom);

// 함수1 : 메인함수
int main() {
	ass01(); //함수 호출
	return 0;
}

// 함수2 : 영역 설정 입력받고 점의 좌표 검사 함수 호출 및 결과 출력
void ass01(void) {
	int left = 0, top = 0, right = 0, bottom = 0, point = 0;
	// 1. 영역 설정 입력받기
	printf("선택 영역의 좌상단점 (left, top)? ");
	scanf("%d %d", &left, &top);
	printf("선택 영역의 우하단점 (right, bottom)? ");
	scanf("%d %d", &right, &bottom);
	// 2. 좌표 검사 함수 호출
	point = squareCheck(left, top, right, bottom);
	// 3. 결과 출력
	if (point == 1) {
		printf("직사각형 모양의 선택 영역 내의 점입니다.\n");
	}
	else {
		printf("직사각형 모양의 선택 영역 외의 점입니다.\n");
	}
	return;
}

// 함수3 : 점의 좌표 검사
int squareCheck(int left, int top, int right, int bottom) {
	int x = 0, y = 0;
	// 1. 점의 좌표 입력받기
	printf("점의 좌표 (x, y)? ");
	scanf("%d %d", &x, &y);
	// 2. 영역 내 점인지 검사
	if (left <= x && x <= right && top <= y && y <= bottom) {
		return 1; // 영역 내 점
	}
	else {
		return 0; // 영역 외 점
	}
}