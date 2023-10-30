/* DE BAI :Cho dãy số nguyên a1, a2, a3,... an. Chèn thêm phần tử x vào vị trí thứ k  (1<=k<=n) trong dãy số.
   Đưa ra màn hình dãy số ban đầu và dãy số sau khi chèn.
   */
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std ;

//==Chuong trinh chinh==//
int main()
{
    //Khai bao tep
    FILE*fp;
    fp=fopen("filebai6.txt","r");
    //Khai bao bien
    int n,k; //Vi co n phan tu
    fscanf(fp,"%d",&n);
    int *a=new int [n];//Khai bao mang
    //Nhap du lieu tu file vao mang
    if(fp==NULL){
        printf("Khong the mo tep !");
    }
    for (int i=0;i<n;i++){
        fscanf(fp,"%d",&a[i]);
        }
    fclose(fp);
    //In ra du lieu ban dau
    printf("Dữ liệu nhận từ file là : ");
        for(int i=0;i<n;i++){
                printf("  %d",a[i]);
                }
    //Thuat toan
    printf("\nHay nhap vao vi tri can xoa : ");
    scanf("%d",&k);
    if(k<0 && k>n){
        printf("\nSo k khong dung . Vui long thu lai !");
        return 0;
    }else{
        for(int j=k;j<n-1;j++){
                a[j]=a[j+1];
        }
        n++;//Tăng  kích thước mảng
    }
    //In ra kết quả
    printf("\nMảng sau khi xóa : ");
    for(int i=0;i<n;i++){
        printf("  %d",a[i]);
    }
    printf("\n");
   return 0;
}