/*DE BAI : Bài 16(ktltbai16.cpp)
   Nhập vào một họ tên. Tách riêng họ đệm và tên. Đưa kết quả ra màn hình.
   ---> Tach chuoi : strcspn
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

     char hoten[100], ho[20],dem[20],ten[20];
     printf("\nMoi nhap vao ho va ten : ");
     //Su bdung fgets se tot hon scanf khi hoat dong voi chuoi

     fgets(hoten,100,stdin);

     //Thuat toan

     //Xoa ky tu xuong dong khi an Enter

     hoten[strcspn(hoten,"\n")]='\0';
     sscanf(hoten,"%s %s %s",ho,dem,ten);

    //In ra ket qua
    printf("\nHo :%s ",ho);
     printf("\nHo dem  :%s ",dem);
      printf("\nTen :%s ",ten);
   return 0;
}

