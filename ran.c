//9/2/64

#include <stdio.h>
 
void main(){  //Fn main//

int  input ;

  //===================Input====================//

      printf("Please Enter Number : "); // <---input number
      scanf("%d",&input);
  //===================Input====================//

  //===================Process====================//
  while (input != 18)      // =8 print correct !=8 print incorrect
  {
    printf("Incorrect!!");
    printf("\nPlease Enter Number : ");
    scanf("%d",&input);
  }
  //===================Process====================//

  //===================Output====================// 
    printf("Correct");
  //===================Output====================//

}