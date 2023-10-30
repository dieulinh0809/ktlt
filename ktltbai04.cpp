/*DE BAI : Bài 04(ktltbai04.cpp)
   Viết chương trình tính sinx với độ chính xác 10^-4 theo
    công thức sau: sinx = x - x^3/3! + x^5/5! + ... + (-1)^n x^(2n+1)/(2*n+1)! + ...
   */
#include<stdio.h>
#include<math.h>
using namespace std ;
int giaithua(int n){
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
    float x,x1;
    int n;
   //x1 la cthuc ban dau 
    float sinx=0;
    printf("Vui long nhap vao x : ");
    scanf("%d",&x);
   while (fabs(x1) >= 0.0001){
        x1 = pow(-1,n)*pow(x,2*n+1)/(giaithua(2*n+1));
        sinx += x1;
        n++;
    }
   printf("sin(%f)=%f",x,sinx);
    //In ra ket qua

   return 0;
}