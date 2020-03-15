#include<iostream>
#include<cstdlib>
#include<new>
using namespace std;
class loc{
    int longitude,latitude;
    public:
        loc(){
            longitude=0;
            latitude=0;
        }
        loc(int lg,int lt){
            longitude=lg;
            latitude=lt;
        }
        void show(){
            cout<<longitude<<" "<<latitude<<endl;
        }
        void *operator new(size_t size);
        void operator delete(void *p);

        void *operator new[](size_t size);
        void operator delete[](void *p);
};
void *loc::operator new(size_t size){
    void *p;
    cout<<"In overloaded new."<<endl;
    p=malloc(size);
    if(!p){
        bad_alloc ba;
        throw ba;
    }
    return p;
}
void loc::operator delete(void *p){
    cout<<"In overloaded delete."<<endl;
    free(p);
}
void *loc::operator new[](size_t size){
    void *p;
    cout<<"Using Overloaded new[]."<<endl;
    p=malloc(size);
    if(!p){
        bad_alloc ba;
        throw ba;
    }
    return p;
}
void loc::operator delete[](void *p){
    cout<<"Freeeing array using overloaded delete[]"<<endl;
    free(p);
}
int main(){
    loc *p1,*p2;
    int i;
    try{
        p1=new loc(10,20);
    }catch(bad_alloc xa){
        cout<<"Allocation faild for P1."<<endl;
        return 1;
    }
    try{
        p2=new loc[10];
    }catch(bad_alloc xa){
        cout<<"Allocation faild for P2"<<endl;
        return 1;
    }
    p1->show();
    for(i=0;i<10;i++)
        p2[i].show();
    delete p1;
    delete []p2;
    return 0;
}
