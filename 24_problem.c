#include<stdio.h>

int main(){
    int x,y,n;
    printf("The value of n is\n");
    scanf("%d",&n);
    if(n==1){
        printf("The value of x is\n");
        scanf("%d",&x);
        y=1+x;
        printf("The value of y is=%d",y);
     }
     else if(n==2){
        printf("The value of x is\n");
        scanf("%d",&x);
        y=1+x/n;
         printf("The value of y is=%d",y);
     }
     else if(n==3){
        printf("The value of x is\n");
        scanf("%d",&x);
        y=1+x*x*x;
         printf("The value of y is=%d",y);
     }
     else if(n>3 || n<1){
       printf("The value of x is\n");
        scanf("%d",&x);
        y=1+n*x;
         printf("The value of y is=%d",y); 
     }

}