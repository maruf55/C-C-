#include<iostream>
using namespace std;
class base{
    public:
    virtual void vfunc(){
        cout<<"This is base vfunc()"<<endl;
    }
};
class derived1: public base{
    public:
    void vfunc(){
        cout<<"This is derived vfunc()"<<endl;
    }
};
class derived2:public base{
    public:
    void vfunc(){
        cout<<"This is derived2 vfunc()"<<endl;
    }
};
int main()
{
    base *p,b;
    derived1 d1;
    derived2 d2;
    p=&b;           //point to base
    p->vfunc();     //access base vfunc()
    p=&d1;          //point to derived1
    p->vfunc();      //access derived1 vfunc()
    p=&d2;          //point to derived2
    p->vfunc();     //access derived2 vfunc()   
    return 0;
}
