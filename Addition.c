#include <stdio.h>
//ดึง Libraly Input Output

void main()
{
    // ส่วน fn หลักของภาษา C คือ Fx Main

    //-----------คำสั่งโปรแกรม---------//
    int num1, num2, total;
    // โปรกาศตัวแปรที่ใช้
    printf("Value of num1 is : ");
    scanf("%d", &num1);

    printf("Value of num2 is : ");
    scanf("%d", &num2);

    total = num1 + num2;

    printf("Answer is : %d", total);

    //-----------สินสุดโปรแกรม---------//
}