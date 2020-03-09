#include<iostream>
#include<new>
using namespace std;
class power{
    int x;
    public:
    power(){
        x=0;
    }
    power(int n){
        x=n;
    }
    int getx(){
        return x;
    }
    void setx(int i){
        x=i;
    }
};
int main(){
    power oftwo[]={1,2,3,4,5,6};
    power ofthree[6];
    power *p;
    int i;
    cout<<"Power of Two:"<<endl;
    for(i=0;i<6;i++){
        cout<<oftwo[i].getx()<<endl;
    }
    ofthree[0].setx(1);
    ofthree[1].setx(1);
    ofthree[2].setx(1);
    ofthree[3].setx(1);
    ofthree[4].setx(1);
    ofthree[5].setx(1);
    cout<<"Power of Three: "<<endl;
    for(i=0;i<6;i++){
        cout<<ofthree[i].getx()<<endl;
    }
    cout<<endl<<endl;
    try{
        p=new power[6];
    }catch(bad_alloc xa){
        cout<<"Allocation faild: ";
        return 1;
    }
    for(i=0;i<6;i++){
        p[i].setx(oftwo[i].getx());
    }
    cout<<"Power of two:"<<endl;
    for(i=0;i<6;i++){
        cout<<p[i].getx()<<endl;
    }
    cout<<endl;
    delete []p;
    return 0;
}
