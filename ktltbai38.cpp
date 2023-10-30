/*DE BAI : Bài 38(ktltbai38.cpp)
   Viết chương trình nhập vào thông tin của sinh viên cho tới khi không muốn nhập nữa. Mỗi sinh viên có thông tin về mã sv, họ tên, điểm tbc.
   Ghi thông tin của các sinh viên ra tệp nhị phân "sinhvien.dat".
   Đọc tệp "sinhvien.dat" và cho biết trên tệp có bao nhiêu sinh viên. Đưa ra thông tin của sinh viên thứ m và sửa điểm tbc của sinh viên này.
   */
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std ;
typedef struct {
    char hoten[50];
    int id;
    float diemtb;
}sinhvien;
//==Chuong trinh chinh==//
int main()
{
    //Khai bao bien
    FILE*fp;
    //Tao mang sv va tao file roi nhap thong tin vao file
    sinhvien sv1;
    int n=0,m;
    int k;
    fp=fopen("sinhvien.dat","wb");
    do{
    //Dung khi k=0
        printf("\nNhap vao thong tin sinh vien \n");
        printf("\nHo va ten : ");
        gets(sv1.hoten);
        printf("\nMa sinh vien : ");
        scanf("%d",&sv1.id);
        getchar();
        printf("\nDiem TBC: ");
        scanf("%f",&sv1.diemtb);
        getchar();
        printf("Ban co muon nhap tiep khong <y=1/n=0>?");
        scanf("%d",&k);
        getchar();
        n++;
        fwrite(&sv1,sizeof(sinhvien),1,fp);
    }while(k!=0);
    fclose(fp);
    //In ra ket qua
    //Mo file ra de lay du lieu
    sinhvien sv[n];
    printf("\nSo luong sinh vien : %d\n",n);
	  fp=fopen("sinhvien.dat","rb");
    printf("\nDanh sach sinh vien trong File : \n");
    for(int i=0;i<n;i++){
        fread(&sv[i],sizeof(sinhvien),1,fp);
        printf(" %d  %s  %d  %f\n",i+1,sv[i].hoten,sv[i].id,sv[i].diemtb);
    }
    printf("\nHay nhap vao so m :  ");
    scanf("%d",&m);
    if(m<0||m>n){
        printf("ERROR");
    }else{
        //In ra thong tin ban dau
        printf("\nThong tin sinh vien ban dau :");
        printf("  %s %d %f ",sv[m-1].hoten,sv[m-1].id,sv[m-1].diemtb);

        //Sua thong tin
        printf("\nHay nhap vao diem TBC ban muon sua : ");
        scanf("%f",&sv[m-1].diemtb);
        //Dua ra thong tin sau khi sua
        printf("\nThong tin sinh vien sau khi sua :");
        printf("%s %d %f",sv[m-1].hoten,sv[m-1].id,sv[m-1].diemtb);
    }
    //Luu lai du lieu vao file
    fwrite(&sv,sizeof(sinhvien),n,fp);
    fclose(fp);
   return 0;
}
//==Dinh nghia ham ==//