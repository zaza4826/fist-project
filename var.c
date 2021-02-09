#include <stdio.h>
// ส่วนที่1 เรียก Library 

void main(){
// ส่วนที่ 2 fn

// ระบบสัมครสมาชิก เก็บ username , email , password , re password ,, phone
//                     char[]   char[]   char[]      char[]        int
                        
//---------------------ตัวแปร------------------------

char studentid[20], name[50], lastname[50], age[50], username[50], password[20], email[50] ,wei[10],hei[10];
//int wei[10],hei[10];

//---------------------ตัวแปร-------------------------

//---------------------รับข้อมูล------------------------
printf("Your studentid is: \n");
scanf("%s",&studentid);

printf("Your name is: \n");
scanf("%s",&name);

printf("Your lastname is: \n");
scanf("%s",&lastname);

printf("Your age is: \n");
scanf("%s",&age);

printf("Your username is: \n");
scanf("%s",&username);

printf("Your password is: \n");
scanf("%s",&password);

printf("Your email  is: \n");
scanf("%s",&email);

printf("Your wei is: \n");
scanf("%s",&wei);

printf("Your hei is: \n");
scanf("%s",&hei);


//---------------------รับข้อมูล------------------------



//---------------------แสดงผลข้อมูล-------------------
printf(" !!! Success !!! \n");
printf("Your Studentid is: %s \n",&studentid);
printf("Your Name      is: %s \n",&name);
printf("Your Lastname  is: %s \n",&lastname);
printf("Your Age       is: %s \n",&age);
printf("Your Username  is: %s \n",&username);
printf("Your Password  is: %s \n",&password);
printf("Your Email     is: %s \n",&email);
printf("Your Weight    is: %s \n",&wei);
printf("Your Height    is: %s \n",&hei);




}
