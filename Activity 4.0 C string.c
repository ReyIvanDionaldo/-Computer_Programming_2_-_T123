#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[255];
    int  i=0;
    int length=0;
    int vowel=0;
    int consonant=0;

   printf("Please input any word(s): ");
   gets(str1);
   printf("____________________________\n");
   printf("You entered: ");
   puts(str1);

   for(int i; str1[i] !='\0'; ++i){

            if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u'){

                ++vowel;
                str1[i]=str1[i]-32;

            }
            else if(str1[i] >= 'a' && str1[i] <= 'z'){
                ++consonant;
            }
   }
    printf("Vowels are converted into UPPERCASE: ");
    puts(str1);
    length = strlen(str1);
    printf("String length: %d\n", length);
    printf("Number of vowels: %d\n", vowel);
    printf("Number of consonants: %d\n", consonant);
    return 0;
}
