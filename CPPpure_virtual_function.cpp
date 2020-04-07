#include <iostream>
#include<cstring>
using namespace std;
class number{
    protected:
    int val;
    public:
    void setvalue(int i){
        val=i;
    }
    virtual void show()=0;  //pure virtual function
};
class hextype:public number{
    public:
    void show(){
        cout<<hex<<val<<endl;
    }
};
class dectype:public number{
    public:
    void show(){
        cout<<val<<endl;
    }
};
class octtype:public number{
    public:
    void show(){
        cout<<oct<<val<<endl;
    }
};
int main(){
    dectype d;
    hextype h;
    octtype o;
    d.setvalue(20);
    d.show();
    h.setvalue(20);
    h.show();
    o.setvalue(20);
    o.show();
}
