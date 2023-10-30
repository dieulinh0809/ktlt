/*DE BAI : Viết chương trình quản lý điểm môn học của sinh viên. Mỗi sinh viên có các thông tin về mã sv, họ tên, lớp, điểm C.Cần, điểm kiểm tra, điểm thi, điểm môn học.
   Điểm môn học = 0,1xC.Cần + 0,3xK.Tra + 0,6xThi. Đọc vào danh sách n sinh viên từ tệp văn bản "sinhvien.txt". Tìm và đưa ra thông tin về sinh viên có điểm MH cao nhất.
   */
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std ;
typedef struct {
    char ho[10];
    char dem[10];
    char ten[10];
}hoten;
typedef struct {
    float cc;
    float ktra;
    float thi;
    float diem;
    hoten ten;
    char lop[50];
    int maSv;
}sinhvien;

//==Chuong trinh chinh==//
int main()
{
    //Khai bao fle
    FILE*fp;
    fp=fopen("sinhvien.txt","r");
    if(fp==NULL){
        printf("Khong the mo tep !");
    }
    //Khai bao mang sv
    sinhvien sv[100];
    //Nhan du lieu tu file
    int n;
    fscanf(fp,"%d",&n);

    for(int i=0;i<n;i++){
         fscanf(fp,"%d",&sv[i].maSv);
         fscanf(fp,"%s",&sv[i].ten.ho);
         fscanf(fp,"%s",&sv[i].ten.dem);
         fscanf(fp,"%s",&sv[i].ten.ten);
         fscanf(fp,"%f",&sv[i].cc);
         fscanf(fp,"%f",&sv[i].ktra);
         fscanf(fp,"%f",&sv[i].thi);
         fscanf(fp,"%s",&sv[i].lop);
         sv[i].diem = 0.1 * sv[i].cc + 0.3 * sv[i].ktra + 0.6 * sv[i].thi;
       }

    fclose(fp);
    //Thuat toan :Khoi tao max la sv dau tien
    int vitrimax=0;
    float diemmax=sv[0].diem;
    for(int i=0;i<n;i++){
        if(sv[i].diem>diemmax){
            diemmax=sv[i].diem;
            vitrimax=i;



        }
    }
    //In ra ket qua
    printf("\n----Sinh vien co so diem cao nhat -----\n");
    printf("\nHo ten : %s %s %s",sv[vitrimax].ten.ho,sv[vitrimax].ten.dem,sv[vitrimax].ten.ten );
    printf("\nLop : %s",sv[vitrimax].lop);
    printf("\nMa Sinh vien : %d",sv[vitrimax].maSv);
    printf("\nDiem : %f",sv[vitrimax].diem);
   return 0;
}
//==Dinh nghia ham ==//pp