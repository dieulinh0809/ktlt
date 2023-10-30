/* DE BAI : Bài 01(ktltbai01.cpp)
   Giải hệ phương trình bậc nhất
    a1x + b1y = c1
    a2x + b2y = c2
   */
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
using namespace std ;

//==Chuong trinh chinh==//
int main()
{
    //Khai bao bien
    int a1,a2,b1,b2,c1,c2;
    int d,dx,dy;
    printf("Hay nhap vao a1 ,b1 ,c1 : ");
    scanf("%d %d %d ",&a1,&b1,&c1);
    printf("Hay nhap vao a2 ,b2 ,c2 : ");
    scanf("%d %d %d ",&a2,&b2,&c2);

    d=a1*b2-a2*b1;
    dx=c1*b2-b1*c1;
    dy=a1*c2-c1*a2;


    //In ra ket qua
    if(d==0){
        if(dx !=0 && dy !=0){
            printf("He phuong trinh vo nghiem ");
        }else{
            printf("he phuong trinh co vo so nghiem ");
        }

    }else{
        printf("x=%d",dx/d);
        printf("\ny=%d",dy/d);

    }
   return 0;
}