#include<stdio.h>

int main(){
    int n, i,fact=1;
    printf("Factorial of the number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
        printf("Factorial=%d",fact);

        
    
}