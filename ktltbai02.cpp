/*DE BAI : Bài 02(ktltbai02.cpp)
   Nhập vào 1 số nguyên dương có 3 chữ số.
   Đưa ra dạng đọc của số nguyên đó. n
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
    int a ,a1,a2,a3;
    printf("Vui long nhap vao so can xet : ");
    scanf("%d",&a);
    a1=a/100;
    a3=a%100;
    a2=(a/10)%10;
    switch(a1){
        case 1 : printf(" Mot tam ");break;
        case 2 : printf(" Hai tram ");break;
        case 3 : printf(" Ba tram");break;
        case 4 : printf(" Bon tram");break;
        case 5 : printf(" Nam tram");break;
        case 6 : printf(" Sau tram");break;
        case 7 : printf(" Bay tram");break;
        case 8 : printf(" Tam tram");break;
        case 9 : printf(" Chin tram");break;

    }
    if(a2==0 && a3 !=0){
        printf(" le ");


    }


       switch(a2){
        case 1 : printf(" muoi");break;
        case 2 : printf(" hai muoi");break;
        case 3 : printf(" ba muoi");break;
        case 4 : printf(" bon muoi");break;
        case 5 : printf(" nam muoi");break;
        case 6 : printf(" sau muoi");break;
        case 7 : printf(" bay muoi");break;
        case 8 : printf(" tam muoi");break;
        case 9 : printf(" chin muoi");break;

    }
    switch(a3){
        case 1 : printf("mot");break;
        case 2 : printf("hai");break;
        case 3 : printf("ba ");break;
        case 4 : printf("bon");break;
        case 5 : printf("nam");break;
        case 6 : printf("sau");break;
        case 7 : printf("bay");break;
        case 8 : printf("tam");break;
        case 9 : printf("chin");break;

    }


    //In ra ket qua

   return 0;
}
//==Dinh nghia ham ==//