#include <stdio.h>
#include <stdlib.h>

int main()
{
    float originaltemp, convertedtemp;
    char selection, converted;
    printf("Input the Original temperature value: ");
    scanf("\n%f", &originaltemp);
    printf("Select original Temperature scale: ");
    scanf("\n%c", &selection);
     printf("Select converted Temperature scale: ");
    scanf("\n%c", &converted);
    if (selection == 'f' || selection == 'F'){
        if ( converted == 'c' || converted == 'C')
        {
            convertedtemp = (originaltemp - 32) * 5 / 9;
        }
        else if (converted == 'k' || converted == "K")
        {
            convertedtemp = (originaltemp - 32) *5 / 9 + 273.15;
        }
        else if (converted == 'f' || converted == "F")
        {
            convertedtemp = originaltemp;
        }
        else{
            printf("%c is not valid input!", converted);
            return -1;
        }
    }
    else if (selection == 'c' || selection == 'C'){
        if ( converted == 'c' || converted == 'C')
        {
            convertedtemp = originaltemp;
        }
        else if (converted == 'k' || converted == "K")
        {
            convertedtemp = originaltemp + 273.15;
        }
        else if (converted == 'f' || converted == "F")
        {
            convertedtemp = (originaltemp * 9 / 5) + 32;
        }
        else{
            printf("%c is not valid input!", converted);
            return -1;
        }
    }
    else if(selection == 'k' || selection == 'K'){
        if ( converted == 'c' || converted == 'C')
        {
            convertedtemp = originaltemp - 273.15;
        }
        else if (converted == 'k' || converted == "K")
        {
            convertedtemp = originaltemp;
        }
        else if (converted == 'f' || converted == "F")
        {
            convertedtemp = (originaltemp - 273.15) * 9 / 5 + 32;
        }
        else{
            printf("%c is not valid input!", converted);
            return -1;
        }
    }
    else{
             printf("%c is not valid input!", converted);
            return -1;
    }
        printf ("%c.2f %c.2f %c", originaltemp, selection, convertedtemp, converted);
        return 0;
}


