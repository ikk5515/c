#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    //렌덤난수
    srand((int)time(NULL));

    int turn = 1, strike, ball;
    int i,j;
    int temp; //난수 중복체크 방지
    int computernum[3], usernum[3];
    
    printf("\n\n숫자야구 게임\n");
    printf("Start Game! \n");
    printf("ex) 1 2 3\n\n");


    for(i=0; i<3; i++){
        temp= rand()%10;
        computernum[i] = temp;
        for(j=0; j<i; j++){
            if(temp == computernum[j]&& i!=j){
                i--;
            }
            if(computernum[0]<1){
                i--;
                continue;
            }
        }
    }
    while(1){
        while(1){
            printf("3개의 숫자 선택: ");
            scanf("%d %d %d",&usernum[0], &usernum[1], &usernum[2]);
            //입력한 숫자가 1~9를 벗어난 경우
            if(usernum[0]<1 ||usernum[0]>9 || usernum[1]<0 ||usernum[1]>9 || usernum[2]<0 ||usernum[2]>9){
                printf("범위 외의 숫자를 입력하지 말아주세요.\n\n");
                continue;
            }
            else if(usernum[0]==usernum[1] || usernum[0]==usernum[2] || usernum[1]==usernum[2]){
                printf("중복된 숫자를 입력하지 말아주세요. \n\n");
                continue;
            }
            break;
        }
        printf("\n");

        strike = 0;
        ball = 0;

        for(int a=0; a<3; a++){
            for(int k=0; k<3; k++){
                if(usernum[a]==computernum[k]){
                    if(a==k){
                        strike++;
                    }
                    else{
                        ball++;
                    }
                }
            }
        }
        printf("%d번째 도전 결과: %dskrike, %dball!! \n\n", turn, strike, ball);
    if(strike==3){
        printf("Game Over! \n");
        break;
    }
    turn++;
    }
    return 0;
}