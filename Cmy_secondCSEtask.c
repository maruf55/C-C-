#include<stdio.h>
struct student{
    char name[10];
    char grade;
    float cgpa[10];
    int reg;
};
int main()
{
    struct student std[10];
    for(int i=0;i<10;i++){
        printf("\nEnter the name:");
        scanf("\n");
        scanf("%s",std[i].name);
        printf("\nEnter reg number:");
        scanf("%d",&std[i].reg);
        printf("\nEnter CGPA:");
        scanf("%f",&std[i].cgpa);
        printf("\nEnter Grade:");
        scanf(" %c",&std[i].grade);
    }
    for(int i=0;i<10;i++){
        printf("%dth student\nName %s\nCGPA %.2f\nGraade %c\n REG %d\n",
        i+1,std[i].name,std[i].cgpa,std[i].grade,std[i].reg);
    }
    return 0;
}
