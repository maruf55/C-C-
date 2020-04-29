#include<iostream>
#include<cmath>
using namespace std;
template<class X> void bubble(X *item,int count){
    register int a,b;
    X t;
    for(a=0;a<count;a++){
        for(b=count-1;b>=1;b--){
            if(item[b-1]>item[b]){
                t=item[b-1];
                item[b-1]=item[b];
                item[b]=t;
            }
        }
    }
}
int main(){
    int iarray[7]={1,4,5,6,8,5,4};
    double darray[5]={3,5,2,6,8};
    int i;
    cout<<"Here is unsorted int array:"<<endl;
    for(i=0;i<7;i++)
        cout<<iarray[i]<<" ";
    cout<<endl;
    cout<<"Here is unsorted double array:"<<endl;
    for(i=0;i<5;i++)
        cout<<darray[i]<<" ";
    cout<<endl;
    bubble(iarray,7);
    bubble(darray,5);
    cout<<"Here is shorted int array:"<<endl;
    for(i=0;i<7;i++)
        cout<<iarray[i]<<" ";
    cout<<endl;
    cout<<"Here is shorted double array:"<<endl;
    for(i=0;i<5;i++)
        cout<<darray[i]<<" ";
    cout<<endl;
    return 0;
}
