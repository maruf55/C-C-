#include<iostream>
using namespace std;
int myfnc(int a);
int myfnc(int a,int b);
int main(){
    int (*fp)(int a);   //pointer to int f(int)
    int (*fs)(int a,int b);
    fp=myfnc;
    fs=myfnc;
    cout<<fp(5)<<endl;
    cout<<fs(5,5)<<endl;
    return 0;
}
int myfnc(int a){
    return a;
}
int myfnc(int a,int b){
    return a*b;
}