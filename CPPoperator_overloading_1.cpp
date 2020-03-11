#include<iostream>
using namespace std;
class loc{
    int longitute,latitute;
    public:
        loc(){}
        loc(int lg,int lt){
            longitute=lg;
            latitute=lt;
        }
        void show(){
            cout<<longitute<<" "<<latitute<<endl;
        }
        loc operator+(loc op2){
            loc temp;
            temp.longitute=op2.longitute+longitute;
            temp.latitute=op2.latitute+latitute;
            return temp;
        }
        loc operator-(loc op2){
            loc temp;
            temp.longitute=longitute-op2.longitute;
            temp.latitute=latitute-op2.latitute;
            return temp;
        }
        loc operator=(loc op2){
            longitute=op2.longitute;
            latitute=op2.latitute;
            return *this;       //return object that generated call
        }
        loc operator++(){
            longitute++;
            latitute++;
            return *this;
        }
};
int main(){
    loc ob1(10,20),ob2(5,30),ob3(90,90);
    ob1.show();
    ob2.show();
    ++ob1;
    ob1.show();
    ob2=++ob1;
    ob1.show();
    ob2.show();
    ob1=ob2=ob3;
    ob1.show();
    ob2.show();
    return 0;
}
