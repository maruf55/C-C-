#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    char ch=136;
    wchar_t wvalue='i';
    cout<<sizeof(wchar_t)<<endl;    //2
    cout<<sizeof(char)<<endl;       //1
    cout<<(char)wvalue<<endl;
    cout<<(char)ch<<endl;
    return 0;
}
