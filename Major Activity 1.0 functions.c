#include <stdio.h>
#include <conio.h>

int main()
{

    char id[30];
    char name[20];
    int unit;
    float charge, mamount, netamount, surcharge = 0;
    printf("**********Enter the detail**********\n\n");
    printf("Enter the user id :: ");
    gets(id);
    printf("Enter the user name :: ");
    fflush(stdin);
    gets(name);
    printf("Enter the unit consumed :: ");
    scanf("%d", &unit);
    printf("\n******** Electricity Bill *********\n");
    printf("user id = %s\n", id);
    printf("user name = %s\n", name);
    printf("consumed unit = %d\n", unit);
    {
        if (unit <=199)
        {
            charge = 1.50;
            mamount = unit * charge;
            printf("Amount charges @P. 1.50 per unit = %.02f", mamount);
        }
        else if (unit >= 250 && unit < 450)
        {
            charge = 1.60;
            mamount = unit * charge;
            printf("Amount charges @P. 1.60 per unit = %.02f", mamount);
        }
        else if (unit >=450 && unit <600)
        {
            charge = 1.85;
            mamount = unit * charge;
            printf("Amount charges @P. 1.85 per unit = %.02f", mamount);
        }
        else if (unit >=600)
        {
            charge = 2.00;
            mamount = unit * charge;
            printf("Amount charges @P. 2.00 per unit = %.02f", mamount);
        }
    }
    if (mamount > 400)
    {
        surcharge = (mamount * 10 / 100.0);
        printf("\nSurcharge is = %.02f\n", surcharge);
        netamount = mamount + surcharge;
        printf("\nThe Customer Total Bill is = %.02f\n", netamount);
    }
    if (mamount < 100)
    {
        netamount = 100;
        printf("\nThe Customer Total Bill 100.");

        return 0;
    }
}
