#include <stdio.h>

int main()
{
    int i, n, count;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count >= 1)
    {
        printf("The number is not prime\n");
    }
    else if (n < 2)
    {
        printf("The number is neither prime nor composite\n");
    }
    else
    {
        printf("The number is prime\n");
    }
}