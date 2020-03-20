#include <iostream>
using namespace std;
class base{
    public:
        base(){
            cout<<"Constructing."<<endl;
        }
        ~base(){
            cout<<"Destructing."<<endl;
        }
};
class derived:public base{
    public:
        derived(){cout<<"Constructing Derived."<<endl;}
        ~derived(){cout<<"Destructing Derived."<<endl;}
};
int main() {
    derived ob;
    return 0;
}
/* output
    Constructing.        
    Constructing Derived.
    Destructing Derived. 
    Destructing.
 */
