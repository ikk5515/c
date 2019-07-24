#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    int input;  //유저가 낸 가위바위보
    int com;      //컴퓨터가 낸 가위바위보
    int draw = 0, win = 0; //승, 무
    srand((int)time(NULL));  //랜덤난수

    //질때까지 반복
    while(1){
        printf("바위는 1, 가위는 2, 보는 3: ");
        scanf("%d", &input);
        printf("\n");

        //1~3까지의 랜덤난수 생성
        com = rand()%((3-1)+1)+1;

        if(com == 1){
            if(input == 1){
                printf("당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다! \n");
                draw++;
            }
            else if(input == 2){
                printf("당신은 가위 선택, 컴퓨터는 바위 선택, 당신이 졌습니다! \n");
                break;
            }
            else{
                printf("당신은 보 선택, 컴퓨터는 바위 선택, 당신이 이겼습니다! \n");
                win++;
            }
        }
        else if(com == 2){
            if(input == 1){
                printf("당신은 바위 선택, 컴퓨터는 가위 선택, 당신이 이겼습니다! \n");
                win++;
            }
            else if(input == 2){
                printf("당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다! \n");
                draw++;
            }
            else{
                printf("당신으 보 선택, 컴퓨터는 가위 선택, 당신이 졌습니다! \n");
                break;
            }
        }
        else{
            if(input == 1){
                printf("당신은 바위 선택, 컴퓨터는 보 선택, 당신이 졌습니다! \n");
                break;
            }
            else if(input == 2){
                printf("당신은 가위 선택, 컴퓨터는 보 선택, 당신이 이겼습니다! \n");
                win++;
            }
            else{
                printf("당신은 보 선택, 컴퓨터는 보 선택, 비겼습니다! \n");
                draw++;
            }
            printf("\n");
        }
    }
        printf("\n\n");
        printf("게임의 결과: %d승, %d무", win,draw);
        return 0;
}