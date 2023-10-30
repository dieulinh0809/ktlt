/* DE BAI : Bài 23(ktltbai23.cpp)
   Cho tệp văn bản "daysonguyen.txt" chứa dãy số nguyên có n phần tử.
   Đọc dãy số nguyên từ tệp vào mảng động.
   Xóa tất cả các phần tử của dãy số có giá trị bằng x. Thay đổi kích thước mảng động bằng với số phần tử còn lại của dãy số.
   */
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std ;

//==Chuong trinh chinh==//
int  main()
{
    //Khai bao bien
    FILE*fp;
    fp=fopen("daysonguyen.txt","r");
    if(fp==NULL){
        printf("\nKhông thể mở tệp !");
        return 1;
    }
    int n=0;
    //Cap phat bo nho dong
    int *a=(int *)malloc(100 * sizeof(int));
    while(fscanf(fp,"%d",&a[n])!=EOF){
        n++;
    }
    fclose(fp);
    printf("\n Day ban vua nhap la : ");
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    int k ;
    int j=0;
    printf("\nSo ban muon xoa la :");
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(a[i]!=k){
            a[j]=a[i];
            j++;
        }
    }
    n=j;
    a = (int *)realloc(a,n * sizeof(int));
    //In ra ket qua
    printf("\nMang sau khi xoa la : ");
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    //Giai phong bo nho
    free(a);
   return 0;
}