// 2/2/2021

#include <stdio.h>

void main(){
    
    float byte;
    ////Input/////
        printf("Please input your bytes : "); //รับข้อมูล
        scanf("%f",&byte);

    /////Input/////

    /////Process/////
        if (byte <= 1024){
            printf("Size : %.2f ",byte ); //.2f ทศนิยม 2 ตำแหน่ง
            printf(" Bytes");
        }else if(byte <= 1048576){
            
            printf("Size : %.2f",byte / 1024);
            printf(" KB");
        }else if(byte <= 1073741824){
            
            printf("Size : %.2f",byte / 1048576);
            printf(" MB");
        }else if(byte >= 1073741824){
            printf("Size : %.2f",byte / 1073741824);
            printf(" GB");
        }    
        
         printf("\nTHANK YOU");
        
    /////Process/////

}
