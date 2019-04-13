#include <stdio.h>

int main(void) {
	int arr[3][3];
	int tarr[3][3];
	int i , j;

	for(i = 0 ; i < 3 ; i++) {
		for(j = 0 ; j < 3 ; j++) {
			scanf("%d", &arr[i][j]);
			}
	}
	for(i = 0 ; i < 3 ; i++) {
		for(j = 0 ; j < 3 ; j++) {
			scanf("%d", &tarr[i][j]);
		}
	}
	for(i = 0 ; i < 3 ; i++) {
		for(j = 0 ; j < 3 ; j++) {
			printf("%d ", arr[i][j]+tarr[i][j] );
			}
		printf("\n");
  }
	return 0;
}