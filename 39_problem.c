#include<stdio.h>
int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
     int i,n;
        float series=0.0;
        scanf("%d",&n);
               
        for(i=1;i<=n;i++){
            series=series+((float)i/factorial(i));

        }
        printf("%f",series);
        
}