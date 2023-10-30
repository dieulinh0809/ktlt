/*DE BAI :Cho dãy số nguyên a1, a2, a3,... an. Chèn thêm phần tử x vào vị trí thứ k  (1<=k<=n) trong dãy số.
   Đưa ra màn hình dãy số ban đầu và dãy số sau khi chèn.
   */
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std ;
void thuattoan(int a[],int n,int k,int x){
    //Thuật toán này có mục đích là dịch chuyển các phần tử ra để chèn phần tử mới vào
    //Bắt đầu từ vị trí n--> Bắt đầu từ phần tử cuối --> Tiến dần cho đến vị trí k
    for(int i=n-1;i>=k;i--){
        a[i+1]=a[i];
    }a[k]=x;
}
//==Chuong trinh chinh==//
int main()
{
    //Khai bao tep
    FILE*fp;
    fp=fopen("filebai6.txt","r");
    //Khai bao bien
    int n,k,x; //Vi co n phan tu
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
    printf("\nHay nhap vao vi tri can them : ");
    scanf("%d",&k);
    printf("\nHay nhap vao phan tu x  : ");
    scanf("%d",&x);
    if(k<0 && k>n){
        printf("\nSo k khong dung . Vui long thu lai !");
        return 0;
    }else{
        thuattoan(a,n,k,x);
        n++;

    }