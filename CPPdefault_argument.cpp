#include<iostream>
using namespace std;
void iputs(char *str,int indent=-1);
int main(){
    iputs("Hello There",10);
    iputs("This will indent 10 spaces");
    iputs("This will indent 5 space",5);
    iputs("This will not indent",0);
    return 0;
}
void iputs(char *str,int indent){
    static int i=0;
    if(indent>=0)
        i=indent;
    else
        indent=i;
    for(;indent;indent--)cout<<" ";
    cout<<str<<endl;
}