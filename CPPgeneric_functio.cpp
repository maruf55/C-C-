#include <iostream>
#include<cstring>
using namespace std;
template <class X> void swapsrgs(X &a,X &b){
    X temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int i=10,j=20;
    double x=10.0,y=23.3;
    char a='x',b='y';
    cout<<"Original i,j "<<i<<" "<<j<<endl;
    cout<<"Original x,y "<<x<<" "<<y<<endl;
    cout<<"Original a,b "<<a<<" "<<b<<endl;
    swapsrgs(i,j);
    swapsrgs(x,y);
    swapsrgs(a,b);
    cout<<"Swapped i,j "<<i<<" "<<j<<endl;
    cout<<"Swapped x,y "<<x<<" "<<y<<endl;
    cout<<"Swapped a,b "<<a<<" "<<b<<endl;
    return 0;
}
