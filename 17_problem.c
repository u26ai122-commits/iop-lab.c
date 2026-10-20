#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("the values of a,b,c:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("a is the big\n");
        }
    }

    else if (b > a)
    {
        if (b > c)
        {
            printf("b is the biggest number\n");
        }
    }
    else if (c > a)
    {
        if (c > b)
        {
            printf("c is the biggest number\n");
        }
    }
}