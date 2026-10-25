#include<stdio.h>

int main(){
    int i,j,n;
    for(i=1;i<=5;i++){
        n=1;
        for(j=5;j>i;j--){
            printf(" ");
        }
        
        for(j=5;j>5-i;j--){
        printf("%d",n);
        n++;
        }printf("\n");
        
    }
}