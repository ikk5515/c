//BOJ_8595_히든_넘버
#include <stdio.h>

int main() {
    char str[5000001];
    int n = 0;
    long long result = 0;
    long long sum = 0;

    scanf("%d", &n);
    scanf("%s", str);

    for (int i = 0; i < n; i++) {
        if (str[i] >= '0' && str[i] <= '9') {       // 문자열중에 숫자가 오는 것을 판별함
            sum = sum * 10 + str[i] - 48;           // 숫자로 만들어주기 위해 마지막에 -48
        }
        else {
            result += sum;
            sum = 0;
        }
    }
    result += sum;                                  // 마지막이 숫자일 수도 있으니 마지막 나온 숫자를 결과값에 더해줌

    printf("%lld", result);
    return 0;
}