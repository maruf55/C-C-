#include<iostream>
using namespace std;
class student{
    public:
    string name;
    string major;
    double gpa;
    student(string n,string m,double g){
        name=n;
        major=m;
        gpa=g;
    }
    bool hashos(){
        if(gpa>3.5){
            return true;
        }
        else return false;
    }
};
int main()
{
    student student1("Maruf","CSE",5.5);
    student student2("XXXX","Buisness",3.3);
    cout<<student1.hashos()<<endl;
    cout<<student2.hashos();  
    return 0;
}
