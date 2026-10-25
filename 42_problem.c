#include<stdio.h>

int main(){
    int i,j,n;
    for(i=1;i<=4;i++){
        n=1;
        for(j=4;j>i;j--){
            printf(" ");

        }
        for(j=4;j>4-i;j--){
            printf("%d",n);
            n++;
        }
        for(j=i-1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}