#include<stdio.h>

int main(){
    int cons,charge;
    float payment;
    scanf("%d",&cons);
    if(cons>=0 && cons<=200){
        payment=cons+(cons*(0.5));
       printf("%f",payment);
    }
    else if(cons>=210 && cons<=400){
        payment=100+(cons-200)*(0.65);
        printf("%f",payment);
    }
    else if(cons>=401 && cons<=600){
        payment=230+(cons-400)*(0.80);
        printf("%d",payment);
    }
    else if(cons>600){
        payment=425+(cons-600)*(1.25);
        printf("%f",payment);
    }
}