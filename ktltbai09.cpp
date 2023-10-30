/*DE BAI :Bài 09(ktltbai09.cpp)
   Cho ma trận nguyên Amxn. Xây dựng ma trận chuyển vị AT. Đưa các ma trận ra màn hình theo định dạng hàng, cột.
   */
#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std ;

//==Chuong trinh chinh==//
int main()
{
    //Khai bao bien
    int m ,n;
    printf("Hay nhap vao so hang cua ma tran :");
    scanf("%d",&m);
    printf("Hay nhap vao so cot  cua ma tran :");
    scanf("%d",&n);
    //Khai báo mảng
    int matran[m][n];
    printf("Hãy nhập vào các phần tử của mảng : ");
    //Chỉ chạy đến m vì bắt đầu từ 0
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matran[i][j]);
        }
    }
    //In ra mang ban dau
    printf("Ma tran  ban dau la :\n ");
    for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            printf(" %d",matran[i][j]);
        }
        printf(" \n");
        }
    //In ra mảng sau khi sắp xếp
    printf("\nMa trận chuyển vị At là  : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf(" %d ",matran[j][i]);
        }
        printf(" \n");
    }
   return 0;
}