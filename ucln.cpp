#include<iostream>
#include<stdio.h>
using namespace std ;
int ucln(int a,int b ){
   if(b==0)return a;
    else return ucln(b,a%b);
}
int main(){
    int num1,num2;
    cout<<"Moi nhap vao so nguyen thu 1: ";
    cin>>num1;
    cout<<"Moi nhap vao so nguyen thu 2: ";
    cin>>num2;
    cout<<"UCLN la : "<<ucln(num1,num2)<<endl;
    return 0;
}