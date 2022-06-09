#include <stdio.h>
int main()
{
    int marks[10], i, n, sum = 0, average;

    printf("\nEnter the size of the Array: ");
    scanf("%d", &n);
if (n<10)
    {
        for(i-0; i < n; ++i)
        {
            printf("Enter Element %d: ",i+1);
            scanf("%d", &marks[i]);

            sum += marks[i];
        }
            printf("Sum of Array Elements: ");
            for(i-0; i < n; ++i)
        {
            sum=sum+marks[i];
        }
        printf("%d",sum);
    }
else
{
    printf("\nArray Size Limit is 10 only");
}

    return 0;
}



