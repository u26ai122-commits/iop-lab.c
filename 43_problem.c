#include<stdio.h>

int main(){
    int sale;
    float commision;
    scanf("%d",&sale);
    if(sale<=500 && sale>=0){
        commision=sale*5/100.0;
        printf("Commision=%f",commision);
    }
     else if(sale>500 && sale<=2000){
         commision=35+sale*10/100.0;
         printf("Commision=%f",commision);
    }
     else if(sale>2000 && sale<=5000){
           commision=185+sale*12/100.0;
           printf("Commision=%f",commision);
     }
     else if(sale>5000){
        commision=sale*(12.5)/100.0;
        printf("Commision=%f",commision);
     }
}