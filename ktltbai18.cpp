 /*DE BAI : Bài 18(ktltbai18.cpp)
   Nhập vào thông tin của 1 cán bộ có mã cán bộ, họ tên, ngày sinh, giới tính; ngày sinh có ngày, tháng, năm; giới tính là Nam/Nu.
   Đưa các thông tin đã nhập ra màn hình, cho biết cán bộ này đã bao nhiêu tuổi.
   */
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std ;
typedef struct {
    int d;
    int m;
    int y;
}born;
typedef struct {
    int maCb;
    char hoTen[100];
    char gt[5];
    born ngaysinh;
}canbo;
//==Chuong trinh chinh==//
int main()
{
    //Khai bao bien
    int n;
    char kt;
    int tuoi ;
    printf("Hay nhap vao so can bo : ");
    scanf("%d",&n);
    canbo canBo[n];
    printf("\n-----Nhap vao thong tin can bo ------");
    for(int i=1;i<=n;i++){
        printf("\nNhap thong tin nguoi thu %d : ",i);
        printf("\nMa can bo :  ");
        scanf("%d",&canBo[i].maCb);
        getchar();

        printf("\nHo va ten :   ");
        gets(canBo[i].hoTen);
        getchar ();

        printf("\nGioi tinh :  ");
        gets(canBo[i].gt);
        getchar ();

        printf("\nNgay sinh  :  ");
        scanf("%d%c%d%c%d",&canBo[i].ngaysinh.d,&kt,&canBo[i].ngaysinh.m,&kt,&canBo[i].ngaysinh.y);


    }

       printf("\n-----Thong tin can bo ------");
    for(int i=1;i<=n;i++){
        printf("\nNhap thong tin nguoi thu %d : ",i);
        printf("\nMa can bo : %d ",canBo[i].maCb);

        printf("\nHo va ten : %s  ",canBo[i].hoTen);
 printf("\nGioi tinh : %s ",canBo[i].gt);


        printf("\nNgay sinh  : %d/%d/%d\n",canBo[i].ngaysinh.d,canBo[i].ngaysinh.m,canBo[i].ngaysinh.y);

        printf("Tuoi : %d",2023- canBo[i].ngaysinh.y);



    }


    //In ra ket qua

   return 0;
}
//==Dinh nghia ham ==//