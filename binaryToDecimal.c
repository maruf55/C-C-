#include<stdio.h>
int main()
{
    int a,b,z[10],i;
    printf("\nEnter the number of bits:");
    scanf("%d",&b);
    printf("Enter the binary bits:");
    for(i=0;i<b;i++){
        scanf("%d",&z[i]);
    }
    a=z[0];
    for(i=0;i<(b-1);i++){
        a=a*2+z[i+1];
        printf("\n%d",a);
    }
    printf("\nDecimal number is:%d",a);
    return 0;
}