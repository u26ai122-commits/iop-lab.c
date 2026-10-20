#include <stdio.h>

int main()
{
    int i, n, sum1 = 0,sum2=0;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    { 
        if(i % 2 == 0)
        {
            sum1=sum1+i;
        }
    }
        printf("The sum of even numbers from 1 to %d is %d\n", n, sum1);
    for(i=1;i<=n;i++)
    {
        if(i % 2 != 0)
        {
            sum2=sum2+i;
        }
    }
        printf("The sum of odd numbers from 1 to %d is %d\n", n, sum2);
    
}