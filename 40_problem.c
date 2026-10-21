#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%dth element of array=%d\n", i, a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {

            printf("%dth element of array=%d\n", i, a[i]);
            sum = sum + a[i];
        }
    }
    printf("sum of non-negative elements of array=%d", sum);
}