#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("The number is not prime\n");
            return 0;
        }
    }
            printf("The number is prime\n");
            if(n<2){
                printf("The number is neither prime nor composite\n");
            }
        
   
}