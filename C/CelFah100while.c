#include <stdio.h>

int main(void) {
	int c = 10;
	int sum = 1;

	printf("섭씨     화씨\n");
	printf("-------------\n");
	while (c <= 100 ) {
		sum = 1.8*c + 32;
		printf("%d         %d\n", c, sum);
		c++;
	}
	return 0;
}
