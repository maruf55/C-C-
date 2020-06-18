#include <iostream>
#include<list>
#include<cstdlib>
using namespace std;
class myclass{
    int a,b;
    int sum;
    public:
    myclass(){
        a=0;
        b=0;
    }
    myclass(int i,int j){
        a=i;
        b=j;
        sum=a+b;
    }
    int getsum(){
        return sum;
    }
    friend bool operator<(const myclass &o1,const myclass &o2);
    friend bool operator>(const myclass &o1,const myclass &o2);
    friend bool operator==(const myclass &o1,const myclass &o2);
    friend bool operator!=(const myclass &o1,const myclass &o2);
};
bool operator<(const myclass &o1,const myclass &o2){
    return o1.sum<o2.sum;
}
bool operator>(const myclass &o1,const myclass &o2){
    return o1.sum>o2.sum;
}
bool operator==(const myclass &o1,const myclass &o2){
    return o1.sum==o2.sum;
}
bool operator!=(const myclass &o1,const myclass &o2){
    return o1.sum!=o2.sum;
}
int main(){
    int i;
    list<myclass> lst1;
    for(i=0;i<10;i++)lst1.push_back(myclass(i,i));
    cout<<"First list: ";
    list<myclass>::iterator p=lst1.begin();
    while(p!=lst1.end()){
        cout<<p->getsum()<<" ";
        p++;
    }
    cout<<endl;
    list<myclass> lst2;
    for(i=0;i<10;i++)lst2.push_back(myclass(i*2,i*3));
    cout<<"Second list: ";
    p=lst2.begin();
    while(p!=lst2.end()){
        cout<<p->getsum()<<" ";
        p++;
    }
    cout<<endl;
    lst1.merge(lst2);
    cout<<"Merged List: ";
    p=lst1.begin();
    while(p!=lst1.end()){
        cout<<p->getsum()<<" ";
        p++;
    }
    return 0;
}
