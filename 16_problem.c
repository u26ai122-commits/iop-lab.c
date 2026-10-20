#include <stdio.h>

int main()
{
    int a, b, c;
    printf("The values of a,b and c are:\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a > b && a > c)
    {
        printf("a is the biggest number or digit\n");
    }
    else if (b > c && b > a)
    {
        printf("b is the biggest number or digit\n");
    }
    else if (c > a && c > b)
    {
        printf("c is the biggest number\n");
    }
}