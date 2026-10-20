#include<stdio.h>

int main(){
    int a,b,c,Max;
    printf("The values of a,b and c are:\n");
    scanf("%d %d %d",&a,&b,&c);
    Max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Max is=%d",Max);
}