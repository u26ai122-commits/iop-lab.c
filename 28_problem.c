#include <stdio.h>

int main()
{
    int i, n, sum;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    int a = n % 10;
    int b = n % 100 / 10;
    int c = n / 100;
    if (a * a * a + b * b * b + c * c * c == n)
    {
        printf("The number is armstrong\n");
    }
    else
    {
        printf("The number is not armstrong\n");
    }
}