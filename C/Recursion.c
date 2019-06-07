#include<stdio.h>
/*
int main() {
	int n = 10;
	int result = 1;

	for (n = 1; n <= 10; n++) {
		result = result * n;
	}
	printf("10! = %d", result);
}
*/
/*
int factoral(int n) {
	if (n <= 1) return 1;
	return n * factoral(n - 1);
}

int main() {
	printf("10! = %d", factoral(5));
}
*/
int quicksort(int a[], int left, int right)
{
	int i, j;
	int pivot_value;
	int tmp;
	if (left >= right) return 0;
	i = left + 1; // Pivot값 제외하고
	j = right;
	// 왼편 끝단의 항목의 값을 Pivot 값으로 선정
	pivot_value = a[left];
	while (1)
	{
		// Pivot 값보다 큰 값 (이상) 일때 까지 i 증가
		while ((i <= right) && (a[i] <= pivot_value))
		{
			i++;
		}
		// Pivot 값보다 작은 값 (미만) 일때 까지 j 감소
		while ((j >= left) && (a[j] > pivot_value))
		{
			j--;
		}
		if (i < j) // i와 j가 아직 충돌조건이 아니라면 i와 j 항목을 서로 교환
		{
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
		else // 충돌조건이면, j항목과 pivot 항목을 서로 교환하고 정렬 정지
		{
			tmp = a[j];
			a[j] = pivot_value;
			a[left] = tmp;
			break;
		}
	}
	// 재귀적으로 교환된 pivot 값의 위치 j 를 기준으로 왼쪽과 오른쪽 정렬
	quicksort(a, left, j - 1);
	quicksort(a, j + 1, right);
	return 0;
}
void main(void)
{
	int a[8] = { 54,23,10,8,66,78,12,25 };
	int N = 8;
	printf("\n [초기상태] \n");
	for (int i = 0; i <= N - 1; i++) printf(" %d", a[i]);
	printf("\n");
	quicksort(a, 0, N - 1);
	printf("\n [정렬 후] \n");
	for (int i = 0; i <= N - 1; i++) printf(" %d", a[i]);
	printf("\n");
}