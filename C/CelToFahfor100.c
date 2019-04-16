#include <stdio.h>

int main(void) {

	int c;
	int sum = 1;
	
	printf("섭씨     화씨\n");
	printf("-------------\n");

	for (c = 10; c <= 100; c++) {
		sum = 1.8*c + 32;
		printf("%d         %d\n", c, sum);
	}
	return 0;
}
