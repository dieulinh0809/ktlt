/* DE BAI : Bài 31(ktltbai31.cpp)
   Tính tổng hai ma trận nguyên có kích thước mxn, Cmxn = Amxn + Bmxn. Ma trận A và B đọc vào từ tệp văn bản "matranAB.txt".
   Y/c viết hàm: (1) Hàm đọc vào từ tệp 2 ma trận A và B.
   (2) Hàm nhận vào hai ma trận qua đối số và trả về ma trận tổng;
   (3) Hàm đưa ma trận ra màn hình theo định dạng hàng, cột.
   */
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std ;
void ham1(FILE*fp,int**a,int**b,int m,int n){
    //Lay du lieu tu file
    //Mang A
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            fscanf(fp,"%d",&a[i][j]);
        }
    }
       //Mang A
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            fscanf(fp,"%d",&b[i][j]);
        }
    }

}
void ham2(int **a,int **b,int m,int n){
    int c[m][n];
    printf("\nMa tran tong la : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf(" %d",c[i][j]);
        }
        printf("\n");
    }
}

void ham3(int **a,int**b,int m,int n){
    printf("Ma tran A : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
        printf("Ma tran B : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf(" %d",b[i][j]);
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
    int **matrixa=NULL,m,n;
    int **matrixb;
    fscanf(fp,"%d %d",&m,&n);
    matrixb=NULL,m,n;
        //Cap phat mang a
    matrixa=(int**)malloc(m*sizeof(int*));
        for(int i=0;i<m;i++){
                matrixa[i]=(int*)malloc(n*sizeof(int));
    }

    //Cap phat mang b
    matrixb=(int**)malloc(m*sizeof(int*));
        for(int i=0;i<m;i++){
            matrixb[i]=(int*)malloc(n*sizeof(int));
        }
    ham1(fp,matrixa,matrixb,m,n);
    ham3(matrixa,matrixb,m,n);
    ham2(matrixa,matrixb,m,n);
    fclose(fp);

    //In ra ket qua

   return 0;
}

