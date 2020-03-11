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
        friend loc operator+(loc op1,loc op2);  //now a friend
        loc operator-(loc op2);
        loc operator=(loc op2);
        loc operator++();
};
loc operator+(loc op1,loc op2){
    loc temp;
    temp.longitute=op1.longitute+op2.longitute;
    temp.latitute=op1.latitute+op2.latitute;
    return temp;
}
loc loc::operator-(loc op2){
    loc temp;
    temp.longitute=longitute+op2.longitute;
    temp.latitute=latitute+op2.latitute;
    return temp;
}
loc loc::operator=(loc op2){
    longitute=op2.longitute;
    latitute=op2.latitute;
    return *this;
}
loc loc::operator++(){
    longitute++;
    latitute++;
}
int main(){
    loc ob1(10,20),ob2(5,30);
    ob1=ob1+ob2;
    ob1.show();
    ++ob1;
    ob1.show();
    ++ob2;
    ob2.show();
    return 0;
}
