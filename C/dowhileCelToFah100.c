#include <stdio.h>

int main(void) {

	int c = 10;
	int sum = 1;
	printf("¼·¾¾          È­¾¾\n");
	printf("-------------------\n");

	do {
		sum = 1.8*c + 32;
		printf("%d             %d\n", c, sum);
		c++;
	} while (c <= 100);
	return 0;
}