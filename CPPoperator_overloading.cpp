#include<iostream>
#include<cstring>
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
            cout<<longitute<<endl<<latitute<<endl;
        }
        loc operator+(loc op2){
            loc temp;
            temp.longitute=op2.longitute+longitute;
            temp.latitute=op2.latitute+latitute;
            return temp;
        }
};
int main(){
    loc ob1(10,20),ob2(5,30);
    ob1.show();
    ob2.show();
    ob1=ob1+ob2;
    ob1.show();
    return 0;
}
