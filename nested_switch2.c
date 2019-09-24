#include<stdio.h>
int main()
{
    static int x,s,a,z,o;
    char text[20];
    printf("\nEnter a number:");
    gets(text);
    while(text[x]!='\0'){
        switch(text[x]){
            case ' ':
                s++;
                break;
            default:
                switch(text[x]){
                    case '1':
                        a++;
                        break;
                    case '0':
                        z++;
                        break;
                    default:
                        o++;
                }
        }
        x++;
    }
    printf("\n Total spaces : %d",s);
    printf("\n Total 1s: %d",a);
    printf("\n Total 0s: %d",z);
    printf("\n String lendth: %d",s+a+z+o);
    return 0;
}