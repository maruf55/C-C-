#include<stdio.h>
int main()
{
    int i;
    int a[][3]={{1,2,3},{4,5,6,},{7,8,9}};
    for(i=0;i<9;i++){
        printf("%u ",&a[0][0]+i);
        printf("[%d] ",(a[0][0]+i));
        if(i==2 || i==5)
        printf("\n");
    }
}