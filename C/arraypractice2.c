#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main() {
	int i, j;
	static char a[][5] = { {'B','E','S','T'},{'K','O','R','E','A'} };
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 5; j++) {
			printf("a[%d][%d] => %c\n", i, j, a[i][j]);
		}
	}
	return 0;
}
*/

int main() {
	int a[3][4] = { 10, };
	int i, j, k = 10;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			a[i][j] = k;
			printf("%4d", a[i][j]);
			k += 10;
		}
		printf("\n");
	}
	return 0;
}