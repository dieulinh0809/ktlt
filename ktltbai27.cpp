/*DE BAI : Bài 27(ktltbai27.cpp)
   Nhập vào một xâu ký tự số hex có tối đã 8 chữ số. Tính giá trị của số hex đã nhập.
    Y/c viết hàm nhận vào xâu ký tự số hex và trả về giá trị của nó
   */
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std ;

//==Chuong trinh chinh==//
int hex(){
    char h[8];
    printf("Hay nhap vao so hex co toi da 8 ky tu : ");
    scanf("%s",&h);
    int a=strtol(h,NULL,16);
    printf("He dec : %d",a);

}
int main()
{
    //Khai bao bien
    hex();


    //In ra ket qua

   return 0;
}