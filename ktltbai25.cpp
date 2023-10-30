/*DE BAI : Bài 25(ktltbai25.cpp)
   Nhập vào danh sách n sinh viên, mỗi sinh viên có thông tin về mã sinh viên,
   họ tên, ngày sinh, giới tính, lớp. Tìm sinh viên có tuổi cao nhất tính đến thời điểm hiện tại.
   Yêu cầu trong chương trình có sử dụng mảng động để chứa danh sách sinh  viên.
   */
#include<iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
using namespace std ;

//==Chuong trinh chinh==//
typedef struct {
    int d;
    int m ;
    int y;
}day;
 struct sinhvien {
    char name[100];
    int id;
    char cls[50];
    char gt[10];
    day ngaysinh;
};
int main()
{
    //Khai bao bien
    int n ;
    printf("Hay nhap vao so sinh vien : ");
    scanf("&d",&n);
    struct sinhvien *sv=(struct sinhvien*)malloc(n*sizeof(struct sinhvien));
    printf(">>>Hay nhap vao thong tin <<<");
    for(int i=0;i<n;i++){
        printf("Nguoi thu %d ",i+1);
        printf("Ho va ten : ");
        gets(sv[i].name);
        getchar();

        printf("Ma sinh vien  : ");
        scanf("%d",&sv[i].id);

        printf("Lop  : ");
        gets(sv[i].cls);
        getchar();
        printf("Ngay sinh (dd/mm/yyyy) : ");
        scanf("%d%c%d%c%d",&sv[i].ngaysinh.d,&sv[i].ngaysinh.m,&sv[i].ngaysinh.y);
    }
    //Thuat toan sap xep
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(sv[j].ngaysinh.y<sv[i].ngaysinh.y){
                    sinhvien temp=sv[i];//hoan vi <note : struct >
                    sv[i]=sv[j];
                    sv[j]=temp;
                }
            }

        }
 printf("\nSinh vien co tuoi lon nhat : \n ");
    int ymin=sv[0].ngaysinh.y;
    for(int i=0;i<n;i++)
        if(sv[i].ngaysinh.y<=ymin){
            printf("%s    %d%c%d%c%d ",sv[i].name,sv[i].ngaysinh.d,sv[i].ngaysinh.m,sv[i].ngaysinh.y);
        }else {
            break;
        }
    free(sv);
   return 0;
}

