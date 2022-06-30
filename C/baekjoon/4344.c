// BOJ_4344_평균은_넘겠지
#include <stdio.h>

int main()
{
    int C;       // 테스트 케이스 C의 개수
    int input_N; // 각 케이스별 학생들의 수
    int score[1001] = {
        0,
    };                 // 학생들의 점수를 입력받을 배열
    int sum;       // 각 케이스별 학생들의 합
    int count;     // 평균보다 점수가 큰 학생들의 수
    double avg = 0.0; // 평균값

    scanf("%d", &C);

    for (int i = 0; i < C; i++)
    {
        sum = 0;
        count = 0;

        scanf("%d", &input_N);              // 각 케이스의 학생들의 수를 입력 및 점수 합계
        for (int j = 0; j < input_N; j++)
        {
            scanf("%d", &score[j]);
            sum += score[j];
        }
        avg = sum / input_N;                // 평균을 구함

        for (int k = 0; k < input_N; k++)   // 평균보다 큰 학생들의 수를 구함 
        {
            if (score[k] > avg)
            {
                count++;
            }
        }
        printf("%.3f%%\n", (double)count/input_N*100);
    }
    return 0;
}