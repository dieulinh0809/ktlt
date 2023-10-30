/* DE BAI :Bài 10(ktltbai10.cpp)
   Cho hai ma trận số nguyên A,B có m hàng, n cột. Tính tổng 2 ma trận: C = A + B.
   Đưa ma trận A, B, C ra màn hình theo định dạng hàng, cột.
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
    int a[m][n];
    int b[m][n];
    int c[m][n];
    //Nhận dữ liệu vào mảng S
    printf("Hãy nhập vào các phần tử của ma trận  A :");
    //Chỉ chạy đến m vì bắt đầu từ 0
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //Nhập vào dữ liệu vào ma trận B
       printf("Hãy nhập vào các phần tử của ma trận  B : ");
    //Chỉ chạy đến m vì bắt đầu từ 0
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //Thuật toán
    for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                c[i][j]=a[i][j]+b[i][j];
        }
    }

    //In ra kết quả
    printf("\nMa trận sau khi tính toán là  : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf(" %d ",c[i][j]);
        }
        printf(" \n");
    }
   return 0;
}

