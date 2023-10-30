/*DE BAI : Bài 34(ktltbai34.cpp)
   Tạo tệp nhị phân "sothuc.dat" chứa n số thực nhập vào từ bàn phím. Đọc lại tất cả các số thực từ tệp và đưa ra màn hình.
   Tính TBC của các số thực. Nhập thêm số thực x và ghi vào cuối tệp.
   */
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std ;

//==Chuong trinh chinh==//
int main()
{
    //Khai bao bien
    float x;
    FILE*fp;
    printf("\n---------CHUONG TRINH TINH TBC N SO NGUYEN TU FILE TOI DA 100 S0-----------\nm");
     fp = fopen("sothuc.dat","wb");
          do{
                printf("Nhap vao so thuc (nhap 0 neu muon dung): ");
        scanf("%f",&x);
        if(x!=0)
            fwrite(&x,sizeof(float),1,fp);
            }while(x!=0);
            fclose(fp);

    fp=fopen("sothuc.dat","rb");
    if(fp==NULL){
        printf("\nKhong the mo tep ! ");
        return 1;

    }
    float sum=0;
    int n =0;
    while(fread(&x,sizeof(float),1,fp)>0){
        sum+=x;
        n++;
        printf(" %f\t ",x);


    }
    printf("TBC : %f",sum/n);

    fclose(fp);
    printf("\nHay nhap so muon ghi vao file : ");
    scanf(" %f",&x);
    fp=fopen("sothuc.dat","rb");
    fwrite(&x,sizeof(float),1,fp);
    fclose(fp);
    //In ra ket qua

   return 0;
}
//==Dinh nghia ham ==//