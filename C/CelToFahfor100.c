#include <stdio.h>
int main(void) {

	int c;
	int sum = 1;
	
	printf("섭씨     화씨\n");
	printf("-------------\n");

	for (c = 10; c <= 100; c+=10) {
		sum = 1.8*c + 32;
		printf("%d         %3d\n", c, sum);
	}
	return 0;
}
