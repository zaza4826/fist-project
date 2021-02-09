// 2/2/2021

#include <stdio.h>

void main(){

    //------------ตัวแปร------------//
    int total = 50000, money;

    //------------ตัวแปร------------//

    //------------INPUT------------//
    printf("Input your money : ");
    scanf("%d", &money);

    //------------INPUT------------//
    //------------PROCESS------------//
    if(money > 99){ // 100 บาท ขึ้นไป
        if(money % 100 == 0){
            if(money > 20000){ //ไม่เกิน20000
                printf("Your limit with draw is 20,000 THB"); 
            }  else {
                printf("Your total money is %d ", total - money);
            }
        } else {
            printf("Incorrect Amount !!");
        }
    } else{
        printf("You have to withdraw money at least 100 THB");
    }
    printf("\n THANK YOU");

    //------------PROCESS------------//



}