/* DE BAI : Bài 29(ktltbai29.cpp)
   Nhập vào một xâu ký tự số nhị phân có tối đa 32 bit. Đưa ra xâu ký tự số hex tương ứng. Y/c viết hàm nhận vào xâu ký tự số nhị phân và trả về xâu ký tự số hex tương ứng qua đối số.
   */
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std ;

//==Chuong trinh chinh==//
int main()
{
    //Khai bao bien
    char bin[32];
    printf("Hay nhap vao 1 xau ky tu so nhi phan toi da 32bit : ");
    scanf("%s",&bin);
    int a= strtol(bin,NULL,2);
    printf("He hex : %x",a);


    //In ra ket qua

   return 0;
}