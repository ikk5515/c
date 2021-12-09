#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int c;
    FILE *fp1, *fp2;
    if (argc != 3) {
        printf("Usage: %s infile outfile\n", argv[0]);
        exit(1); // 프로그램 종료
    }
    if ((fp1 = fopen(argv[1], "r")) == 0) {
        printf("cannot open %s\n", argv[1]);
        exit(1);
    }
    if ((fp2 = fopen(argv[2], "w")) == 0)
    {
        printf("cannot open %s\n", argv[2]);
        exit(1);
    }
    while ((c = getc(fp1)) != EOF)
        putc(c, fp2);
    fclose(fp1);
    fclose(fp2);
}
