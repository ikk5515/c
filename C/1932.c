#include <stdio.h>

int dp[501][501];

int Max(int a, int b)
{
    return a > b ? a : b;
}

void triangle(int n)
{
    int i, j;
    int max = 0;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1)
            {
                dp[i][j] += dp[i - 1][j];
            }
            else if (i == j)
            {
                dp[i][j] += dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = Max(dp[i - 1][j], dp[i - 1][j - 1]) + dp[i][j];
            }
            if (max < dp[i][j])
                max = dp[i][j];
        }
    }
    printf("%d", max);
}

int main()
{
    int n;
    int i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            scanf("%d", &dp[i][j]);
        }
    }
    triangle(n);
}