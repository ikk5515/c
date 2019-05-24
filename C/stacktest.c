#include <stdio.h>

int main(void) {
	char stack[5];
	int i, top = 0;
	char ask = 65;
	stack[top] = ask;

	for (i= 0; i < 3; i++) {
		stack[top] = ask;
		printf("%c 자동차가 동굴에 들어감 \n", stack[top]);
		top++;
		ask++;
	}
	printf("\n");

	for (i = 0; i < 3; i++) {
		top--;
		printf("%c 자동차가 동굴을 빠져나감 \n", stack[top]);
		stack[top] = ' ';
	}
}