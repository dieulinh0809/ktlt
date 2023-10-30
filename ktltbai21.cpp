/*DE BAI : Bài 21(ktltbai21.cpp)
   Viết chương trình tính tổ hợp chập k của n, C(k,n).
   Yêu cầu trong chương trình có sử dụng hàm tự tạo để tính tổ hợp chập k của n.
   */
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
using namespace std ;
int giaithua(int n ){
    int gt=1;
     for(int i=1;i<=n;i++){
        gt=gt*i;
    }
    return gt;
}
//==Chuong trinh chinh==//
int main()
{
    //Khai bao bien
    int n,k;
    int a;
    printf("Vui long nhap vao n : ");
    scanf("%d",&n);
    printf("\nVui long nhap vao k : ");
    scanf("%d",&k);
    a=n-k;
    //Thuat toan
    int tu=giaithua(n);
    int mau=giaithua(k);
    int mau2=giaithua(a);
    int c=tu/(mau*mau2);
    printf("\nTo hop  chap k cua n phan tu la : %d ",c);



   return 0;
}