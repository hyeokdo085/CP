/*
파일명: Ass01_main.c
내용: 질량과 속력을 실수로 입력받아 운동 에너지를 구하는 프로그램 작성(질량:kg, 속력: m/s)
작성자: 안도혁
날짜: 2025.04.09
버전: v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ass0401(void);
double getMotionEnergy(double weight, double velocity);

int main(void) {
	ass0401();
	return 0;
}


/*
	함수명: ass0401()
	기능: 질량, 속력 실수로 입력받음, 운동 에너지를 계산하도록 호출, 결과 출력
	입력: 없음
	반환: 정수(0=성공, 그외=에러)
*/
int ass0401(void) {

	// 1. 질량, 속도 입력받아 저장
	double w = 0.0, v = 0.0; // 질량 kg, 속력 m/s
	printf("질량(kg) 속도(m/s)를 입력해주세요: ");
	scanf("%lf %lf", &w, &v);

	// 2. 운동에너지 계산
	double result = getMotionEnergy(w, v);

	// 3. 계산된 운동에너지 출력
	printf("질량 = %.2f kg, 속력 = %.2f m/s의 운동에너지는 %.2f J 입니다.", w, v, result);
	return 0;
}


/*
	함수명: getMotionEnergy()
	기능: 질량, 속력 입력받아 운동 에너지 계산 후 반환
	입력: 질량(kg, 실수), 속력(m/s, 실수)
	반환: 운동에너지(J, 실수, 소수점 2자리)
*/
double getMotionEnergy(double weight, double velocity) {
	double energy = 0.0;
	// 운동에너지 = 1/2 * 질량 * 속력^2
	energy = 0.5 * weight * velocity * velocity;

	return energy;
}