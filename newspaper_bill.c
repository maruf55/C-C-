#include<stdio.h>
#include<string.h>
#include<windows.h>

// int function_for_28day();
// int function_for_30day();
// int function_for_31day();

struct name{
    //char day_name[7][8]={"Saterday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    int dt;
    int newspaper_price;
};
int main()
{
    FILE ;
    struct name january[31];
    struct name february[28];
    struct name march[31];
    struct name april[30];
    struct name may[31];
    struct name june[30];
    struct name july[31];
    struct name august[31];
    struct name september[30];
    struct name october[31];
    struct name november[30];
    struct name december[31];

    int month_number;
    int date;
    printf("Enter number of the Month:");
    scanf("%d",&month_number);
    //gets(month_name);
    switch(month_number){
        case 1:
            printf("Enter date of the month:");
            scanf("%d",&date);
            if(date <=31 && date>=0){
                january[date-1].dt= date;
            }
            printf("Enter %dth days Newspaper Price:",date);
            scanf("%d",&january[date-1].newspaper_price);
            break;

        case 2:

            printf("Enter date of the month:");
            scanf("%d",&date);
            if(date <=28 && date>=0){
                february[date-1].dt= date;
            }
            printf("Enter %dth days Newspaper Price:",date);
            scanf("%d",&february[date-1].newspaper_price);
            break;

        case 3:

            printf("Enter date of the month:");
            scanf("%d",&date);
            if(date <=31 && date>=0){
                march[date-1].dt= date;
            }
            printf("Enter %dth days Newspaper Price:",date);
            scanf("%d",&march[date-1].newspaper_price);
            break;

        case 4:

            printf("Enter date of the month:");
            scanf("%d",&date);
            if(date <=30 && date>=0){
                april[date-1].dt= date;
            }
            printf("Enter %dth days Newspaper Price:",date);
            scanf("%d",&april[date-1].newspaper_price);
            break;

        case 5:

            printf("Enter date of the month:");
            scanf("%d",&date);
            if(date <=31 && date>=0){
                may[date-1].dt= date;
            }
            printf("Enter %dth days Newspaper Price:",date);
            scanf("%d",&may[date-1].newspaper_price);
            break;

        case 6:

            printf("Enter date of the month:");
            scanf("%d",&date);
            if(date <=30 && date>=0){
                june[date-1].dt= date;
            }
            printf("Enter %dth days Newspaper Price:",date);
            scanf("%d",&june[date-1].newspaper_price);
            break;

        case 7:

            printf("Enter date of the month:");
            scanf("%d",&date);
            if(date <=31 && date>=0){
                july[date-1].dt= date;
            }
            printf("Enter %dth days Newspaper Price:",date);
            scanf("%d",&july[date-1].newspaper_price);
            break;

        case 8:

            printf("Enter date of the month:");
            scanf("%d",&date);
            if(date <=31 && date>=0){
                august[date-1].dt= date;
            }
            printf("Enter %dth days Newspaper Price:",date);
            scanf("%d",&august[date-1].newspaper_price);
            break;

        case 9:

            printf("Enter date of the month:");
            scanf("%d",&date);
            if(date <=30 && date>=0){
                september[date-1].dt= date;
            }
            printf("Enter %dth days Newspaper Price:",date);
            scanf("%d",&september[date-1].newspaper_price);
            break;

        case 10:

            printf("Enter date of the month:");
            scanf("%d",&date);
            if(date <=31 && date>=0){
                october[date-1].dt= date;
            }
            printf("Enter %dth days Newspaper Price:",date);
            scanf("%d",&october[date-1].newspaper_price);
            break;

        case 11:

            printf("Enter date of the month:");
            scanf("%d",&date);
            if(date <=30 && date>=0){
                november[date-1].dt= date;
            }
            printf("Enter %dth days Newspaper Price:",date);
            scanf("%d",&november[date-1].newspaper_price);
            break;

        case 12:

            printf("Enter date of the month:");
            scanf("%d",&date);
            if(date <=31 && date>=0){
                december[date-1].dt= date;
            }
            printf("Enter %dth days Newspaper Price:",date);
            scanf("%d",&december[date-1].newspaper_price);
            break;

        default:
        
            printf("\nInvalid input.");
    }

}
// int function_for_28day(int n_month,int d){
//     printf("Enter date of the month:");
//         scanf("%d",&date);
//         if(date <=28 && date>=0){
//             february[date-1].dt= date;
//         }
//         printf("Enter %dth days Newspaper Price:",date);
//         scanf("%d",&february[date-1].newspaper_price);
// }
// int function_for_30day(int n_month,int d){
//     printf("Enter date of the month:");
//         scanf("%d",&date);
//         if(date <=28 && date>=0){
//             february[date-1].dt= date;
//         }
//         printf("Enter %dth days Newspaper Price:",date);
//         scanf("%d",&february[date-1].newspaper_price);
// }
// int function_for_31day(int n_month,int d){
//     printf("Enter date of the month:");
//         scanf("%d",&date);
//         if(date <=28 && date>=0){
//             february[date-1].dt= date;
//         }
//         printf("Enter %dth days Newspaper Price:",date);
//         scanf("%d",&february[date-1].newspaper_price);
// }