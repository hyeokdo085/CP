#include <stdio.h>

void copy_array(int from[], int to[], int sz);
#ifdef DEBUG
int test_copy_array();
#endif

int main() {
	test_copy_array();
	return 0;
}

int test_copy_array() {
#define LEN 5
	int x[LEN] = { 1, 2, 3, 4, 5 };
	int y[LEN] = { 0 };
	int size = sizeof(y) / sizeof(y[0]);
	copy_array(x, y, size);

	for (int i = 0; i < LEN; i++) { //어썰트함수(검사함수)
		if (y[i] != x[i]) {
			return -1;
		}
	}

	return 0;
}

void copy_array(int from[], int to[], int sz) {
	for (int i = 0; i < sz; i++) {
		to[i] = from[i];
	}
}