/*
파일명 : Ass02.c
내용 : PA2. 학생의 번호롸 학점 입력받아 출력하는 프로그램 작성. 단, 번호는 정수, 학점은 실수.
작성자 : 영어교육과 202010853 안도혁
날짜 : 2025.03.25
버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void student();

int main()
{
	student();
	return 0;
}

void student()
{
	int id;
	float grade;
	printf("번호? ");
	scanf("%d", &id);
	printf("학점? ");
	scanf("%f", &grade);
	printf("%d번 학생의 학점은 %.6f입니다.", id, grade);
}