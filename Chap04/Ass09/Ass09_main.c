/*
파일명: Ass09-main.c
내용: 재생시간을 초 단위로 입력받아 시, 분, 초로 변환하여 출력하는 프로그램
작성자: 안도혁
날짜: 2025.04.19
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ass0409(void);
void StoHMS(int sec);

int main(void) {
	ass0409();
	return 0;
}


/*
	함수명: ass0409()
	기능: 재생시간을 초 단위로 입력받아 StoMS() 호출
	입력: 없음
	반환: 정수(0=성공, 그외=에러)
*/
int ass0409(void) {

	// 1. 재생시간을 초 단위로 입력받아 저장
	int s = 0; // 초 = sec
	printf("재생시간(초)? ");
	scanf("%d", &s);

	// 2. StoHMS 함수를 호출
	 StoHMS(s);

	return 0;
}


/*
	함수명: StoHMS()
	기능: 초를 시, 분, 초로 변환하여 출력
	입력: 초(sec, 정수)
	반환: 없음(내부에서 printf로 출력)
*/
void StoHMS(int sec) {
	// 1. 시, 분, 초에 대한 변수 선언
	int hours = 0, minutes = 0, seconds = sec;
	
	// 2. 초를 시로 변환 후 남은 초 저장
	hours = seconds / 3600;
	seconds = seconds % 3600;

	// 3. 남은 초를 분으로 변환 후 남은 초 저장
	minutes = seconds / 60;
	seconds = seconds % 60;

	// 4. 시, 분, 초 출력(조건 연산자 이용하여 0일 경우 생략)
	printf("재생시간은");
	hours == 0 ? printf("") : printf(" %d시간", hours);
	minutes == 0 ? printf("") : printf(" %d분", minutes);
	seconds == 0 ? printf("입니다.\n") : printf(" %d초입니다.\n", seconds);
	
	return;
}