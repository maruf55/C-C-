#include <gnu/stubs-64.h>
#include <iostream>
#include <sstream>
using namespace std;

class Student{
    int age;
    string first_n;
    string last_n;
    int standard;
    public:
        void set_age(int Gage){
            age=Gage;
        }
        void set_standard(int s){
            standard=s;
        }
        void set_first_name(string s1){
            first_n=s1;
        }
        void set_last_name(string s2){
            last_n=s2;
        }
        int get_age(){
            return age;
        }
        int get_standard(){
            return standard;
        }
        string get_first_name(){
            return first_n;
        }
        string get_last_name(){
            return last_n;
        }
        string to_string(){
            stringstream s1,s2;
            s1<<age;
            s2<<standard;
            string first=s1.str();
            string second=s2.str();
            string s=first+","+first_n+","+last_n+","+second;
            return s;
        }
        
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
