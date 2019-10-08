#include <stdio.h>

int abs(int x) {
	if (x >= 0) return (x);
	else return (-x);
}
void main() {
	int result;
	result = abs(25);
	printf("abs(25)=%d\n", result);
	result = abs(-25);
	printf("abs(-25)=%d\n", result);
}