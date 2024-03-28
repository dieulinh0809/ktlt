/* DE BAI : Bài 19(ktltbai19.cpp)
   Nhập vào thông tin của n mặt hàng, mỗi mặt hàng có thông tin về tên hàng, số lượng, đơn giá. Tính tổng tiền của n mặt hàng.
   */
#include<bits/stdc++.h>
using namespace std ;
typedef struct{
    int slg;
    int gia;
    char ten[100];
}matHang;
//==Chuong trinh chinh==//
int main()
{
    //Khai bao bien
    int n ;
    printf("\nHay nhap vao so luong mat hang : ");
    scanf("%d",&n);
    //Khai bao mang
    matHang sp[n];
    printf("\nHay nhap vao thong tin cua cac mat hang \n");
    for(int i=0;i<n;i++){
        printf("\n Mat hang thu %d ",i+1);
        printf("\nTen : ");
       scanf("%s",&sp[i].ten);
        getchar();
        printf("\nSo luong : ");
        scanf("%d",&sp[i].slg);
        printf("\nGia : ");
        scanf("%d",&sp[i].gia);

    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=sp[i].gia*sp[i].slg;
    }
    //In ra ket qua
    printf("\nTong tien cua %d mat hang : %d",n,sum);
   return 0;
}

