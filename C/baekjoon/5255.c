//BOJ_5355_화성_수학
#include <stdio.h>

int main() {
    int n;
    char ch;
    double result = 0.0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%lf", &result);
        while (1)
        {
            scanf("%c", &ch);
            if (ch == '\n') {
                break;
            }
            if (ch == '@') {
                result *= 3;
            }
            if (ch == '%') {
                result += 5;
            }
            if (ch == '#') {
                result -= 7;
            }
        }
        printf("%.2f\n", result);
    }
    return 0;
}