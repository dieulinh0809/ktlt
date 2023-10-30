/*DE BAI : Bài 02(ktltbai02.cpp)
   Nhập vào 1 số nguyên dương có 2 chữ số.
   Đưa ra dạng đọc của số nguyên đó. Ví dụ: 23 => đọc là Hai ba; 90 => đọc là Chín mươi; 34 => đọc là Ba mươi bốn
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
    int a ,a1,a2;
    printf("Vui long nhap vao so can xet : ");
    scanf("%d",&a);
    a1=a/10;
    a2=a%10;
    switch(a1){
        case 1 : printf(" Muoi");break;
        case 2 : printf(" Hai muoi");break;
        case 3 : printf(" Ba muoi");break;
        case 4 : printf(" Bon muoi");break;
        case 5 : printf(" Nam muoi");break;
        case 6 : printf(" Sau muoi");break;
        case 7 : printf(" Bay muoi");break;
        case 8 : printf(" Tam muoi");break;
        case 9 : printf(" Chin muoi");break;

    }   ;
    switch(a2){
        case 1 : printf("  mot");break;
        case 2 : printf("  hai");break;
        case 3 : printf("  ba ");break;
        case 4 : printf("  bon");break;
        case 5 : printf("  nam");break;
        case 6 : printf("  sau");break;
        case 7 : printf("  bay");break;
        case 8 : printf("  tam");break;
        case 9 : printf("  chin");break;

    }


    //In ra ket qua

   return 0;
}