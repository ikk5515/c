#include <stdio.h>

int main() {
    int Quad1 = 0, Quad2 = 0;

    scanf ("%d %d", &Quad1, &Quad2);

    if (Quad1 > 0 && Quad2 > 0) {
        printf("1");
    }
    else if (Quad1 < 0 && Quad2 > 0)
    {
        printf("2");
    }
    else if (Quad1 < 0  && Quad2 < 0)
    {
        printf("3");
    }
    else {
        printf("4");
    }
    
    return 0;
}