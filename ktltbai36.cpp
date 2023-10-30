/* DE BAI : Bài 36(ktltbai36.cpp)
   Cho tệp văn bản input.txt chứa tọa độ của 2 điểm A và B trên mặt phẳng. Đọc tọa độ của 2 điểm và tính khoảng cách AB.
    Ghi kết quả ra tệp kq.txt.
     Tệp input.txt có cấu trúc như sau: A 2.5 4 B 3 5 Tệp kq.txt có cấu trúc như sau: A(2.5; 4) B(3; 5) AB = 1.12
   */
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
using namespace std ;

//==Chuong trinh chinh==//
int main()
{
    //Khai bao bien
    FILE*fp;
    fp=fopen("input.txt","r");
    if(fp==NULL){
        printf("ERROR");
        return 0;
    }
    char a[2],b[2];
    float ax,ay,bx,by;
    fscanf(fp,"%s %f %f %s  %f %f",a,&ax,&ay,b,&bx,&by);
    printf(" %f %f %f %f",ax,ay,bx,by);
    fclose(fp);
    float ab=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
    fp=fopen("kq.txt","w+");
        fprintf(fp," A(%0.2f ,%0.2f) B(%0.2f ,%0.2f) AB= %f",ax,ay,bx,by,ab);
    fclose(fp);
   return 0;
}
//==Dinh nghia ham ==//*/