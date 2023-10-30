 /*DE BAI : Bài 35(ktltbai35.cpp)
   Viết chương trình tạo tệp văn bản "songuyen.txt" bằng hàm của ngôn ngữ C để chứa n số nguyên nhập vào từ bàn phím.
   Trong tệp "songuyen.txt", dòng 1 chứa giá trị của n, dòng 2 chứa các số nguyên cách nhau bởi 1 dấu cách.
   Đọc lại tất cả các số nguyên từ tệp và đưa ra màn hình. Tính TBC các số nguyên.
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
    FILE*fp;
    fp=fopen("songuyen.txt","r");
    if(fp==NULL){
        printf("\nKhong the mo tep !");

        return 1;
    }
    int n ;
    fscanf(fp,"%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        fscanf(fp," %d",&a[i]);
    }
    fclose(fp);
    //In ra ket qua
    printf("\nDu lieu nhap tu file : ");
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);

    }
    float sum=0;
    printf("\nTrung binh cong cua day so la : ");
    for(int i=0;i<n;i++){
        sum+=a[i];

    }
    float tbc=sum/n;
    printf(" %f \n",tbc);

   return 0;
}

//==Dinh nghia ham ==//