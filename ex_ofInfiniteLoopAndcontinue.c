#include<stdio.h>
int main()
{
    for(int i=1; ;){
        if(i==21){
            break;
        }
        else if(i%2==0){
            printf("%d\t",i);
            i++;
            continue;
        }
        else{
            i++;
            continue;
        }
    }
}
//print even number upto 21 using infinite for loop and continue