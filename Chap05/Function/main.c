/*
실습일 : 2025.04.16
작성자 : 안도혁
실습내용 : 함수 실습
*/

#include <stdio.h>

//함수를 전방 선언
void f1(void);
int f3(int a, int b);

//메인 함수
int main() {
	int x = 3;
	f1();
	int result = f3(2, 3);
	return 1;
}

//함수 정의 = 함수 구현
/*
함수명 : void f1(void)
기능 : Hello 출력
입력 : 없음
반환 : 없음
*/
void f1(void) {
	// 1. Hello 출력
	printf("안녕! 나는 네 할아버지야\n");
	return;
}

/*
함수명 : int f3(int a, int b)
기능 : 입력된 두 수 a, b를 더해서 반환
입력 : 정수 a, b
반환 : 정수 result
*/
int f3(int a, int b) {
	// 1. 두 수를 더해서 반환
	int result = a + b;
	return result;
}