#include <stdio.h>
#pragma warning (disable:4996)

typedef struct student {
   char name[5];             //학생 이름
   int kor;                  //점수
   int eng;                 //점수
   int math;               //점수
   float Average;          //점수 평균
} Student;

void ShowAverage(Student *std, int number) {
   float sum = 0;
   
   sum += std[number].kor + std[number].eng + std[number].math;

   std[number].Average = sum / 3;
}

int main() {
   Student std[3];

   for (int i = 0; i < 3; i++) {
      scanf("%s %d %d %d", std[i].name, &std[i].kor, &std[i].eng, &std[i].math);
      getchar();
   }

   ShowAverage(std, 0);
   ShowAverage(std, 1);
   ShowAverage(std, 2);

   for (int k = 0; k < 3; k++) {
      printf("%s %.1f \n", std[k].name, std[k].Average);
   }

   system("pause");
   return 0;

   
}