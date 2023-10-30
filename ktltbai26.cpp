/*DE BAI : Bài 26(ktltbai26.cpp)
   Cho tệp văn bản "daysonguyen.txt" chứa dãy số nguyên có n phần tử. Đọc dãy số nguyên từ tệp vào mảng động. Sắp xếp dãy số tăng dần.
   Yêu cầu viết một hàm sắp xếp dãy số, một hàm hoán đổi nội dung 2 ô nhớ để dùng trong hàm sắp xếp, một hàm đưa dãy số ra màn hình.
   */
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std ;
int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void sapxep(int *a,int n){
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n-1;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
}
void in(int *a,int n){
    printf("\nDay so nguyen (before/after)  : ");
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
    if(fp==NULL){
        printf("\nKhong the mo tep ! ");
        return 1;
    }
    int n=0;
    int *a=new int[100];//Khai bao mang dong
    while(fscanf(fp,"%d",&a[n])!=EOF){
        n++;
    }
    printf("\nDay co %d so \n",n);
/*    for(int i=0;i<=n;i++){
        fscanf(fp,"%d",&a[i]);
    }*/
    fclose(fp);
    in(a,n);
    sapxep(a,n);
    in(a,n);


    //In ra ket qua

   return 0;
}

