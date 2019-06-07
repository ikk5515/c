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
	i = left + 1; // Pivot�� �����ϰ�
	j = right;
	// ���� ������ �׸��� ���� Pivot ������ ����
	pivot_value = a[left];
	while (1)
	{
		// Pivot ������ ū �� (�̻�) �϶� ���� i ����
		while ((i <= right) && (a[i] <= pivot_value))
		{
			i++;
		}
		// Pivot ������ ���� �� (�̸�) �϶� ���� j ����
		while ((j >= left) && (a[j] > pivot_value))
		{
			j--;
		}
		if (i < j) // i�� j�� ���� �浹������ �ƴ϶�� i�� j �׸��� ���� ��ȯ
		{
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
		else // �浹�����̸�, j�׸�� pivot �׸��� ���� ��ȯ�ϰ� ���� ����
		{
			tmp = a[j];
			a[j] = pivot_value;
			a[left] = tmp;
			break;
		}
	}
	// ��������� ��ȯ�� pivot ���� ��ġ j �� �������� ���ʰ� ������ ����
	quicksort(a, left, j - 1);
	quicksort(a, j + 1, right);
	return 0;
}
void main(void)
{
	int a[8] = { 54,23,10,8,66,78,12,25 };
	int N = 8;
	printf("\n [�ʱ����] \n");
	for (int i = 0; i <= N - 1; i++) printf(" %d", a[i]);
	printf("\n");
	quicksort(a, 0, N - 1);
	printf("\n [���� ��] \n");
	for (int i = 0; i <= N - 1; i++) printf(" %d", a[i]);
	printf("\n");
}