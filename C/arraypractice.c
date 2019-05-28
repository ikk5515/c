#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main(void) {
	int a[10] = { 0, };
	int i, max, min;

	printf("10개의 수 입력: ");
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

		max = a[0];
		min = a[0];
		for (i = 0; i < 10; i++) {
			if (max < a[i]) max = a[i];
		}
		printf("max ==> %d \n", max);
		for (i = 0; i < 10; i++) {
			if (min > a[i]) min = a[i];
		}
		printf("min ==> %d \n", min);
		return 0;
}
*/

int main(void) {
	int a[10];
	int i;
	for (i = 0; i < 10; i++) {
		a[i] = 5 * i + 10;
		printf("%4d ", a[i]);
	}
	return 0;
}