#include<stdio.h>
#include<conio.h>
int fac(int n){
    if(n<=1)
        return 1;
    return n*fac(n-1);
}
int main()
{
    int choice,a,b,t;
    printf("\nEnter 1 to determine the number(even or odd)""\nEnter 2 to print number of table"
    "\nEnter 3 to print the factorial of a number"
    "\nEnter 4 to convert temperature celcious to farenhite:\n""Enter 5 to swap two number:\n");
    printf("Enter 0 to terminate:\n");
    while(1){
        puts("");
        scanf("%d",&choice);
        if(choice==0){
            return 0;
        }
        switch(choice){
            case 1:
                printf("Enter The Number:");
                scanf("%d",&a);
                if(a%2==0)printf("\n%d is even.\n",a);
                else printf("\n%d is odd\n",a);
                break;
            case 2:
                printf("Enter the number:");
                scanf("%d",&a);
                for(int i=1;i<=10;i++)
                    printf("\n%d  X  %d  =   %d\n",a,i,a*i);
                break;
            case 3:
                printf("Enter the number:");
                scanf("%d",&a);
                printf("\nFactorial of %d is %d\n",a,fac(a));
                break;
            case 4:
                printf("Enter the number:");
                scanf("%d",&a);
                printf("\nTemperature in farenhite is %.2f\n",(float)((9*a)/5)+32);
                break;
            case 5:
                printf("Enter two number:");
                scanf("%d%d",&a,&b);
                t=a;
                a=b;
                b=t;
                printf("\n%d is now %d and %d is now %d.\n",b,a,a,b);
                break;
            default:
                printf("\nInvalid choice.\n");
        }
    }
    return 0;
}
