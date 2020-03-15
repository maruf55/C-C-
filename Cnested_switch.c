#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    switch(x){
        case 0:
            printf("Number is even");
            break;
        case 1:
            printf("Number is odd");
            break;
        default:
            y=x%2;
            switch(y){
                case 0:
                    printf("Number is even");
                    break;
                case 1:
                    printf("Number is odd");
                    break;
            }
    }
    return 0;
}
