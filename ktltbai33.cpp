/* DE BAI : Bài 33(ktltbai33.cpp)
   Cho tệp văn bản "daysonguyen.txt" chứa dãy số nguyên có n phần tử. Đọc dãy số nguyên từ tệp vào mảng động. Tìm phần tử có giá trị bằng x.
    Y/c viết hàm:
   (1) Hàm nhận vào qua đối số mảng chứa dãy số và x, trả về vị trí phần tử nếu tìm thấy và trả về 0 nếu không tìm thấy phần tử bằng x;
   (2) Hàm đưa dãy số ra màn hình;
    (3) Hàm đọc dãy số từ tệp vào mảng động, gửi kết quả ra ngoài qua đối số.
   */
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std ;
void ham1(FILE*fp,int*a,int n){
    int x;
    for(int i=0;i<=n;i++){
        fscanf(fp,"%d",&a[i]);
    }
    printf("\nHay nhap vao gia tri x : ");
    scanf("%d",&x);
    for(int i=0;i<=n;i++){
        if(a[i]==x){
            printf("\nVi tri cua x la : %d ",i+1);
        }
    }
}
void ham2va3(int*a,int n){
    printf("\nDay so la : ");
    for(int i=0;i<=n;i++){
        printf(" %d",a[i]);
    }
}
//==Chuong trinh chinh==//
int main()
{
    //Khai bao bien
    FILE*fp;
    fp=fopen("daysonguyen.txt","r");
    int n=0 ;
    int*a;
    a=(int*)malloc(n*sizeof(int));
    while(fscanf(fp,"%d",&a[n])!=EOF){
        n++;
    }
    ham1(fp,a,n);
    ham2va3(a,n);


    //In ra ket qua

   return 0;
}
//==Dinh nghia ham ==//