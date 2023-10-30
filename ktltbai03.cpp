/*DE BAI :Bài 03(ktltbai03.cpp)
   Tìm và đưa ra các số nguyên tố nhỏ hơn n.
   */
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
using namespace std ;
int checkNT(int n ){
    //Ap dung thuat toan tim so NT
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;//Tra ve 0 neu if dung
        }
    }
    return 1;
}
//==Chuong trinh chinh==//
int main()
{

    //Khai bao bien
    int n ;
    printf("Vui long nhap vao n : ");
    scanf("%d",&n);
    //Thuat toan
    //Idea : So NT nho nhat la 2 , vay nen so nho hon 2 khong la so NT
    if(n<2){
        printf("Khong co so nguyen to . So nguyen to nho nhat la 2 ");
    }else{
        printf("Cac so nguyen to la : ");
        for(int i=2;i<=n;i++){
            //printf("\n%d ==> %d\n",i,checkNT(i));
            if(checkNT(i)==1){
            //Neu ham check nt tai i la 1 tuc la ham dung thi in ra i
                printf(" %d",i);

            }

        }
    }

   return 0;
}