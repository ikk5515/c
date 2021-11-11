// 함수포인터를 매개변수로 사용
#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
void executer(int (*fp)(int, int)) {
    printf("%d\n", fp(10, 20)); // 함수 포인터 사용 함수호출
    }
    int main() {
        executer(add);
        executer(sub);
        return 0;
}