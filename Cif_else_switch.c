#include<stdio.h>
int main()
{
    int i;
    printf("\nEnter any ASCII Number:");
    scanf("%d",&i);
    switch(i){
        case 'A':
            printf("Capital A\n");
            break;
        case 'B':
            printf("Capital B\n");
            break;
        case 'C':
            printf("Capital C\n");
            break;
        default:
            if(i>47 && i<58)
                printf("\nDigit is %c",i);
            else if(i>=58 && i<=64)
                printf("\nSymbol is %c",i);
            else if(i>64 && i<91)
                printf("\nCapital is %c",i);
            else if(i>96 && i<123)
                printf("\nSmall is %c",i);
            else
                printf("\nInvalid choice.");
    }
    return 0;
}
