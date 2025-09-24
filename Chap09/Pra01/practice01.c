/*
문제: 키보드로부터 다음 레코드를 한 줄 입력받아 필드를 구분하여
구조체 배열에 저장한 후 출력하는 프로그램을 작성
레코드 형식 : 이름 | 학번 | 학과 | 학년(정수)
입력종료조건 : "exit" 입력
최소 함수 3개? 
*/

//학생 구조체
struct Student {
	char name[24];
	char id[16];
	char major[32];
	int year;
};
typedef struct Student Student;