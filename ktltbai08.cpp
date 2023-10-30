/* DE BAI :Bài 08(ktltbai08.cpp)
   Cho ma trận số nguyên có m hàng, n cột.
   Tìm số lớn nhất trên từng hàng và đổi chỗ về đầu hàng.
   Đưa ma trận ban đầu và ma trận sau khi thay đổi ra màn hình theo định dạng hàng, cột.
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
    //Thuật toán
    int max=0;
    int k;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matran[i][j]>max){
                max=matran[i][j];//Nếu số ở hàng i cột j lớn hơn max thì đó là max
                k=j;/*Hàng max nhưng là thay đổi cột .Sở dĩ phải lấy k=j là vì j chỉ là 1 biến trong vòng lặp
                và khi chương trình chạy xong vong lap , se hien lôi không tim thấy j */
            }
        }
        //Khi đã tìm được số max , quay về vòng lặp for bên ngòi tiến hành hoán vị
        int temp=matran[i][0];//Chọn vị trí hàng bất kỳ (i) cột 0 là temp vì đề bài yêu cầu sắp max lên đầu
        matran[i][0]=max;//Vị trí mt[i][0] đổi về vị trí của max .
        //NOTE :HOÁN VỊ KHÔNG PHẢI BẰNG
        matran[i][k]=temp;//Khi này số max sẽ thay vào vị trí đầu
    }
    //In ra mảng sau khi sắp xếp
    printf("\nMa trận sau khi sắp xếp là : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf(" %d ",matran[i][j]);
   }
        printf(" \n");

    }
   return 0;
}
//==Dinh nghia ham==//