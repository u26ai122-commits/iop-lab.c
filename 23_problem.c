#include<stdio.h>

int main(){
    int a,b,power;
    printf("the value of a and b is \n");
    scanf("%d%d",&a,&b);
    power = 1;
    for( int i=1;i<=b;i++)
    {
        power = a*power;

    }
printf("the result is : %d",power);

}