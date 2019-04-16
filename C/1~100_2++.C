#include <stdio.h>

int main(void) {
	printf("1~100까지 2씩증가한 값: ");

	int i= 0, sum= 0;
	for (i = 0; i <= 100; i+= 2) {
		sum = sum + i;
	}
	printf("%d", sum);
	return 0;
}