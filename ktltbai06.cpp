/* DE BAI :Bài 06(ktltbai06.cpp)
   Cho dãy số nguyên a1, a2, a3,... an. Đưa các số lẻ về đầu dãy, các số chẵn về cuối dãy.
    Đưa ra màn hình dãy số ban đầu và dãy số sau khi thay đổi.
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
    int n,j; //Vi co n phan tu
    fscanf(fp,"%d",&n);
    int a[n];//Khai bao mang
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
    //Thuat toan sap xep

    for(int i=0;i<n-1;i++){//i chay den n-1 vi con phai xet j
        for(int j=0;j<n;j++){
                if(a[j]%2 ==0){
                int temp=a[i];//Hoan vi//
                    a[i]=a[j];
                    a[j]=temp;
                break;
        }
        }
    }

    //In ra ket qua sau khi sap xep
    printf("\nMang sau khi sap xep : ");
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
   return 0;
}