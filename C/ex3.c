#include <stdio.h>

int main(){
        int val[4];        //입력받은 정수 4개를 저장할 배열
        int temp;        //임시저장용 변수 
        int i, j;        //반복제어변수

        printf("정수 4개를 입력해주세요.(0~9까지) \n");
        
        for(i=0;i<4;i++){
                scanf("%d", &val[i]);
        }
        
        for(i=0;i<4;i++){ 
             for(j=0;j<3;j++){        
                  if(val[j] < val[j+1]){
                          temp = val[j];
                          val[j] = val[j+1];
                          val[j+1] = temp;  
                  }
             }
        }
        printf("가장 큰 수: ");
        for(i=0;i<4;i++){
                printf("%d", val[i]);
        }

        for(i=0;i<4;i++){ 
             for(j=0;j<3;j++){        
                  if(val[j] > val[j+1]){
                          temp = val[j];
                          val[j] = val[j+1];
                          val[j+1] = temp;  
                  }
             }
        }
            printf("\n가장 작은 수: ");
            for(i=0;i<4;i++){
                printf("%d", val[i]);
            }
        return 0;
}
