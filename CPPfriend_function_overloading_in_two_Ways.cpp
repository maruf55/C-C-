#include<iostream>
using namespace std;
class loc{
    int longitude,latitude;
    public:
        loc(){}
        loc(int lg,int lt){
            longitude=lg;
            latitude=lt;
        }
        void show(){
            cout<<longitude<<" "<<latitude<<endl;
        }
        friend loc operator+(loc op1,int op2);
        friend loc operator+(int op1,loc op2);
};
loc operator+(loc op1,int op2){
    loc temp;
    temp.longitude=op1.longitude+op2;
    temp.latitude=op1.latitude+op2;
    return temp;
}
loc operator+(int op1,loc op2){
    loc temp;
    temp.longitude=op1+op2.longitude;
    temp.latitude=op1+op2.latitude;
    return temp;
}
int main(){
    loc ob(10,20),ob2(5,30),ob3(7,17);
    ob.show();
    ob2.show();
    ob3.show();
    ob=ob2+10;
    ob3=10+ob2;
    ob.show();
    ob3.show();
    return 0;
}
