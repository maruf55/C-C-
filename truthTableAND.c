#include<stdio.h>
int main()
{
    int a[4],b[4],x,c[4];
    printf("Enter four bits:");
    for(x=0;x<4;x++){
        scanf("%d",&a[x]);
        if(a[x]>1 || a[x]<0){
            x--;
            continue;
        }
    }
    printf("Enter four bits:");
    for(x=0;x<4;x++){
        scanf("%d",&b[x]);
        if(b[x]>1 || b[x]<0){
            x--;
            continue;
        }
    }
    printf("\nA\tB\tC");
    for(x=0;x<4;x++){
        if(a[x]==1 && b[x]==1)
            c[x]=1;
        else
            c[x]=0;
        printf("\n%d\t%d\t%d",a[x],b[x],c[x]);
    }
    return 0;
}