#include <stdio.h>

int main()
{
    int i, n, fact=0;
    scanf("%d", &n);
    for (i = 2; i <= (n / 2); i++)
    {
        if (n % i == 0)
        {
            fact = 1;
        }
    }
    if (fact == 1)
    {
        printf("The number is composite\n");
    }
    else if(n!=1 && fact!=1)
    {
        printf("n is prime");
    }
    if(n<=1){
        printf("n is neither prime nor composite\n");
    }
}