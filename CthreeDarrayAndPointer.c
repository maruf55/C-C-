#include<stdio.h>
int main()
{
    int a[2][2][2]={1,2,3,4,5,6,7,8};
    int i,j,k,b[2][2][2]={1,2,3,4,5,6,7,8};
    int c[2][2][2];
    printf("\nAddition of three dimensional array as follows:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                *(*(*(c+i)+j)+k)=*(*(*(a+i)+j)+k)+*(*(*(b+i)+j)+k);
            }
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                printf("%d ",*(*(*(c+i)+j)+k));
            }
        }
    }
}
