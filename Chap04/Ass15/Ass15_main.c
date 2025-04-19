/*
파일명: Ass15-main.c
내용: 매매기준율, 환전우대율을 입력받아 환율을 계산하여 출력하고, 
	구입할 달러를 입력받아 환전할 원화를 계산하여 출력하는 프로그램(환전수수료율 1.75%)
작성자: 안도혁
날짜: 2025.04.19
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ass0415(void);
double rate_exch(double standard, double prefer);
double exchanger(double dollar, double rate);

int main(void) {
	ass0415();
	return 0;
}


/*
	함수명: ass0415()
	기능: 매매기준율, 환전우대율을 입력받아 환율을 계산하도록 호출,
		구입할 달러를 입력받아 환전할 원화를 계산하도록 호출,
		결과 출력
	입력: 없음
	반환: 정수(0=성공, 그외=에러)
*/
int ass0415(void) {

	// 1. 매매기준율, 환전우대율, 환율, 구입할 달러, 원화 변수 선언
	double stand = 0.0, pref = 0.0, rate = 0.0, doller = 0.0, won = 0.0; // 매매기준율, 환전우대율, 환율, 구입할 달러, 원화

	// 2. 매매기준율, 환전우대율 입력받아 저장
	printf("원/달러 매매기준율? ");
	scanf("%lf", &stand);
	printf("환전우대율(0~100%)? ");
	scanf("%lf", &pref);

	// 3. 환율 계산
	rate = rate_exch(stand, pref);

	// 4. 환율 출력
	printf("달러 살 때 환율은 %.6f 입니다.\n", rate);

	// 5. 구입할 달러 입력받아 원화 계산
	printf("구입할 달러(USD)? ");
	scanf("%lf", &doller);
	won = exchanger(doller, rate);

	//6. 결과 출력
	printf("USD %.2f 살 때 ==> KRW %.2f\n", doller, won);

	return 0;
}


/*
	함수명: rate_exch()
	기능: 매매기준율과 환전우대율을 입력받아 환율 계산 후 반환
		환율 = 매매기준율 + 환전수수료
		환전수수료 = 매매기준율 * 환전수수료율 * (1 - 환전우대율)
		환전수수료율 = 1.75%
	입력: 매매기준율(standard, 실수), 환전우대율(prefer, 실수)
	반환: 환율(rate, 실수)
*/
double rate_exch(double standard, double prefer) {

	// 1. 환율 변수 선언
	double rate = 0.0;

	// 2. 환율 계산
	rate = standard + (standard * 0.0175 * (1 - prefer / 100));

	// 3. 환율 반환
	return rate;
}

/*
	함수명: exchanger()
	기능: 구입할 달러를 입력받아 환전할 원화 계산 후 반환
	입력: 구입할 달러(dollar, 실수), 환율(rate, 실수)
	반환: 환전할 원화(won, 실수)
*/
double exchanger(double dollar, double rate) {

	// 1. 환전할 원화 변수 선언
	double won = 0.0;

	// 2. 환전할 원화 계산
	won = dollar * rate;

	// 3. 환전할 원화 반환
	return won;
}