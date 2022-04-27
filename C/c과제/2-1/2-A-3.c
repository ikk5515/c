#include <stdio.h>

int main() { 
    FILE *fin, *fout;

    char id[10];
    int kor, eng, mat, tot;
    double avg;

    int c;

    fin = fopen("/Users/ingi/Desktop/자료/2-1/데이터베이스/3주차/과제/in.txt", "r");
    if (fin == NULL)
    {
        printf("파일열기 실패\n");
        return -1;
    }
    fout =fopen("/Users/ingi/Desktop/자료/2-1/데이터베이스/3주차/과제/201944026-03-2.txt", "w");
    

    fprintf(fout, "\t\t\t중간 고사 성적 일람표\n");
    fprintf(fout, "================================================================\n");
    fprintf(fout, "  학번 \t\t국어 \t영어 \t수학 \t총점 \t평균\n");
    fprintf(fout, "================================================================\n");

    while (1)
    {
        fscanf(fin, "%s %d %d %d", id, &kor, &eng, &mat);
        tot = kor + eng + mat;
        avg = tot / 3;

        fprintf (fout, "%3s %12d %8d %7d %8d %8.1lf \n", id, kor, eng, mat, tot, avg);

       if (fgetc(fin) == EOF)
        {
            break;
        }

    }
    fprintf(fout, "================================================================\n");

    fclose(fin);
    fclose(fout);
    return 0;
}