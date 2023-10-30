/* DE BAI : Bài 30(ktltbai30.cpp)
   Cho tệp văn bản "matran.txt" chứa ma trận nguyên có kích thước mxn. Đọc vào ma trận từ tệp.
    Đếm số phần tử lẻ. Y/c viết hàm:
    (1) Hàm nhận vào ma trận qua đối số và trả về số đếm được.
     (2) Hàm đưa ma trận ra màn hình theo định dạng hàng, cột.
   */
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std ;
int  nhanvadem(int **a, int m ,int n  ){
    printf("Dêm so le trong ma tran : ");
    int dem=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]%2 !=0){
                dem++;
            }
        }
    }
    printf("%d",dem);
}
int print(int **a, int m ,int n){

    printf("\n Ma tran :\n ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
}


//==Chuong trinh chinh==//

int main()
{
    //Khai bao bien
    FILE*fp;
    fp=fopen("matran.txt","r");
    if(fp==NULL){
        printf("\nKhong the mo tep ! ");
        return 1;
    }
    //Khai bao mang dong 2 chieu
    int **a=NULL,m,n;
    fscanf(fp,"%d %d",&m,&n);
    //Cap phat bo nho dong

        a=(int **)malloc(m*sizeof(int*));
        for(int i=0;i<m;i++){
            a[i]=(int*)malloc(n*sizeof(int));
        }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
 if(a[i][j]%2 !=0){
                dem++;
            }
        }
    }
    printf("%d",dem);
}
int print(int **a, int m ,int n){

    printf("\n Ma tran :\n ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
}


//==Chuong trinh chinh==//

int main()
{
    //Khai bao bien
    FILE*fp;
    fp=fopen("matran.txt","r");
    if(fp==NULL){
        printf("\nKhong the mo tep ! ");
        return 1;
    }
    //Khai bao mang dong 2 chieu
    int **a=NULL,m,n;
    fscanf(fp,"%d %d",&m,&n);
    //Cap phat bo nho dong

        a=(int **)malloc(m*sizeof(int*));
        for(int i=0;i<m;i++){
            a[i]=(int*)malloc(n*sizeof(int));
        }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            fscanf(fp,"%d",&a[i][j]);

        }
    }
    fclose(fp);
    nhanvadem(a,m,n);
    print(a,m,n);
    //Giai phong bo nho theo dong
    for(int i=0;i<m;i++){
        free(a[i]);
    }
    //Giai phong not
    free(a);
    //In ra ket qua

   return 0;
}

