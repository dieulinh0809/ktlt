/* DE BAI :Cho ma trận số nguyên A có kích thước mxp, ma trận số nguyên B có kích thước pxn.
    Tính tích 2 ma trận: Cmxn = Amxp x Bpxn. Đưa ma trận A, B, C ra màn hình theo định dạng hàng, cột.
   */
#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std ;

//==Chuong trinh chinh==//
int main()
{
    //Khai bao bien
    int m ,n,p;
    //Nhap vao hang cot cua A va B ,C
    printf("\nThuật toán tính tích 2 ma trận : Cmxn = Amxp x Bpxn\n");
    printf("Hay nhap vao so m :");
    scanf("%d",&m);
    printf("Hay nhap vao so n :");
    scanf("%d",&n);
    printf("Hay nhap vao so p :");
    scanf("%d",&p);
    //Khai báo mảng
    int a[m][p];
    int b[p][n];
    int c[m][n];
    //Nhận dữ liệu vào mảng S
    printf("Hãy nhập vào các phần tử của ma trận  A :");
    //Chỉ chạy đến m vì bắt đầu từ 0
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //Nhập vào dữ liệu vào ma trận B
       printf("Hãy nhập vào các phần tử của ma trận  B : ");
    //Chỉ chạy đến m vì bắt đầu từ 0
    for(int i=0;i<p;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    //Thuật toán
    for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<p;k++){
                    /*vòng lặp k được sử dụng để duyệt qua tất cả các phần tử trong dòng i của ma trận A
                     và cột j của ma trận B (với k được sử dụng để truy cập tất cả các phần tử từ hạng tử
                      thứ 0 đến hạng tử thứ p - 1 theo thứ tự). Mỗi lần lặp, phép nhân của A[i][k] * B[k][j]
                      được tính toán và đóng góp vào tổng của phần tử tại vị trí i, j của ma trận kết quả.
                    Do đó, vòng lặp k cần được thực hiện đầy đủ p lần để tính toán cả tổng các phép nhân giữa
                     tất cả các phần tử ở hàng i của ma trận A và cột j của ma trận B.*/
                        c[i][j]+=a[i][k]*b[k][j];//C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + ...
                }
        }
    }

    //In ra kết quả
 printf("\nMa trận sau khi tính toán là  : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf(" %d ",c[i][j]);
        }
        printf(" \n");
    }
   return 0;
}
//==Dinh nghia ham==//