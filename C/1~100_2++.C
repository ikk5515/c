#include <stdio.h>

int main(void) {
	printf("1~100까지 2씨 증가한 값: ");

	int i = 0, sum = 0;
	while (i <= 100) {
		sum = sum + i;;
		i++;
	}
	printf("%d", sum);
	return 0;
}
