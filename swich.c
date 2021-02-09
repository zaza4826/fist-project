// C=Coke P=Pepsi F=Fanta other= Soda

#include <stdio.h>

void main(){

//////VR/////
int money;
//char money;
//////VR/////

//////INPUT/////
printf("Please input your drink : ");
scanf("%d",&money);
//////INPUT/////

//////Process/////
 switch (money)
 {
 case '>=1000':
     printf("Coke !");
     break;
 case '>=100':
     printf("Pepsi !");
     break;     
 case 'f':
     printf("Fanta !");
     break; 
 default:
     break;
 }

//////Process/////
}


