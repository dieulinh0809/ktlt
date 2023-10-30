/* DE BAI : Bài 24(ktltbai24.cpp)
   Tính gần đúng e^x với độ chính xác Eps=0.0001 theo công thức dưới sau:
    e^x = 1 + x + x^2/2! + x^3/3! + … + x^n/n! + … Yêu cầu trong chương trình sử dụng tất cả là biến động.
   */
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
using namespace std ;
int gt(int n ){
    int gt=1;
    for(int i=1;i<=n;i++){
        gt*=i;
    }
    return gt;
}
//==Chuong trinh chinh==//
int main()
{
    //Khai bao bien
    int n =1;
    double x,e=1,e1;
    printf("\nHay nhap vao x : ");
    scanf("%lf",&x);
    //Idea : sd ham fabs de lay dau gtri tuyet doi
    //e1 tuc la gia tri e vong lap trươc .Thuat toan se dung lai cho den khi dat do chinh xac y/c
    do{
        e1=e;
        e+=pow(x,n)/gt(n);
        n++;
    }while(fabs(e-e1)>=0.0001);

    //In ra ket qua
    printf("\n e^%lf=%lf",x,e);

   return 0;
}