#include<stdio.h>

int main(){
    int i,n,q,sum=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        q=n%10;
        sum=sum+q;
        n=n/10;

    }
    printf("sum of digits of n=%d",sum);
}