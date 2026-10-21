#include<stdio.h>

int main(){
    int i,n;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(i%2==0 && n%2==0){
            printf("%d\n",i);
        }
    }
    for(i=2;i<n;i++){
    if(i%2==0 && (n-1)%2==0)
        {
            printf("%d\n",i);
        }
    }
}