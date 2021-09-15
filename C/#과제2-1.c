#include <stdio.h>

void main(){
    static int jumsu[4][3] = {{90, 90, 90},
                              {80, 80, 80},
                              {70, 70, 70},
                              {50, 50, 50}};
    int sum, i, j;
    printf("번호 국어 영어 수학 총점 평균\n");
        printf("------------------------------------------\n");
    for (i = 0; i < 4; ++i){
        sum = 0;
        printf("%3d", i + 1);
        for (j = 0; j < 3; j++){
            printf("%5d", jumsu[i][j]); // 점수 출력
            sum += jumsu[i][j];         // 총점 계산ㄱ,
        }
            printf("%6d %5.1f\n", sum, sum / 3.0);
    }
}