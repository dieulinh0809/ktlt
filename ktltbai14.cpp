/* DE BAI :Bài 14(ktltbai14.cpp)
   Nhập vào một xâu ký tự số hex có tối đa 8 chữ số. Đưa ra giá trị của số hex đó.
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
    char s[8];
    printf("hay nhap vao xau ky tu hex :");
    scanf("%s",&s);
    //In ra ket qua
    int a =strtol(s,NULL,16);
    printf("He dec : %d",a);
   return 0;
}