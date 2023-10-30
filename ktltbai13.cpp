/* DE BAI :Bài 13(ktltbai13.cpp)
   Nhập vào một xâu ký tự số nhị phân có tối đa 16 bit. Đưa ra giá trị của số nhị phân đó.
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
    char s[16];
    printf("Hay nhap vao chuoi nhi phan  can chuyen doi :");
    scanf("%s",&s);
    //In ra ket qua
   int a=  strtol (s,NULL,2);
   printf(" He dec : %d\n",a);
   return 0;
}

