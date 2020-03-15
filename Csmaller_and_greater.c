#include<stdio.h>
int main()
{
    int a[10];
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int min=a[0];
    for(int i=0;i<10;i++){
        if(max<a[i+1])
            max=a[i+1];
        if(a[i+1]<min){
            min=a[i+1];
        }
    }
    printf("Max element is: %d\n",max);
    printf("Minimum element is: %d\n",min);
}
