#include <iostream>
using namespace std;
class base{
    protected: 
    int i;
    public:
        base(int x){
            i=x;
            cout<<"Constructing Base."<<endl;
        }
        ~base(){
            cout<<"Destructing Base."<<endl;
        }
};
class derived:public base{
    int j;
    public:
        derived(int x,int y):base(y){j=x;cout<<"Constructing Derived."<<endl;}
        ~derived(){cout<<"Destructing Derived."<<endl;}
        void show(){cout<<i<<" "<<j<<endl;}
};
int main() {
    derived ob(3,4);
    ob.show();
    return 0;
}
