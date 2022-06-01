#include<stdio.h>

int main()
{


    int Comprog1,RPH,Calculus,PE,GenMath=0;
    float average,total=0;
    char name[30];

    printf("Enter Student name:");
    gets(name);

    printf("\nEnter Comprog 1 Grade:");
    scanf("%d",&Comprog1);
    printf("Enter RPH Grade:");
    scanf("%d",&RPH);
    printf("Enter GenMath Grade:");
    scanf("%d",&GenMath);
    printf("Enter Calculus Grade:");
    scanf("%d",&Calculus);
    printf("Enter P.E Grade:");
    scanf("%d",&PE);

    total= Comprog1+RPH+GenMath+Calculus+PE;
    average=total/5;

    printf("\nHi ");
    puts(name);

    printf("Your grade total is %.2f\n",total);
    printf("Your grade average is %.2f",average);


    return 0;
}
