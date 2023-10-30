/*DE BAI : Bài 15(ktltbai15.cpp)
   Nhập vào một danh sách n tên (chỉ tên, không họ đệm) >.
    Sắp xếp danh sách tên theo vần ABC.
   */
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std ;

//==Chuong trinh chinh==//
int main()
{
    //Khai báo số lượng of danh sách
    int n ;
    printf("\nHay nhap vao n : ");
    scanf("%d",&n);
    //Khai bao mang
    /*
        Mang ten[100][10] gom 100 hang va 10 cot -> moi ten co 10 ky tu
        Nhap toi da 100 ten
        tg la bien tam co cung kich thuoc toi da la 10 ky tu
    */
    char  ten[100][10] ,tg[10];
    //Nhap thong tin cua mang
    printf("\n-----Hay nhap vao thong tin ------\n ");
    for(int i=1;i<n+1;i++){
        printf("\nNhap vao ten thu %d :  ",i);
        scanf("%s",&ten[i]);
    }
    /*
     Vòng lặp ngoài: Điều kiện i < n-1, tương ứng với việc chỉ cần xét tới
      phần tử thứ n-2 để đảm bảo sự tương đương trong quá trình so sánh và đổi chỗ phần tử.
     Vòng lặp trong: Điều kiện j > i, tương ứng với việc duyệt các phần tử từ
      phần tử cuối cùng của danh sách (n-1) đến phần tử thứ i.
     Nếu tên của phần tử thứ j (ten[j]) nhỏ hơn tên của phần tử thứ j-1 (ten[j-1]) theo thứ tự ABC,
      ta đổi chỗ hai phần tử này. Sử dụng hàm strcasecmp để so sánh chuỗi, chú ý rằng hàm này so sánh không phân biệt hoa thường.
     Ban đầu, biến tg (trung gian) được khai báo kiểu char, lưu trữ tên của phần tử thứ j để thực hiện đổi chỗ.
    */
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
         if(strcasecmp(ten[j],ten[j-1])<0)//Ham so sanh chuoi
        {
            strcpy(tg,ten[j]);//Ham sao chep
            strcpy(ten[j],ten[j-1]);
            strcpy(ten[j-1],tg);

    }
    }
    }
    //In ra ket qua
    printf("-----Danh sach ten sau khi sap xep -----\n");
    for (int i=0;i<n;i++){

        printf("%d   %s \n",i+1,ten[i]);
    }

    //In ra ket qua

   return 0;
}