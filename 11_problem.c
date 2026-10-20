#include<stdio.h>

int main(){
     float hours,minutes;
     int seconds,days;
     printf("Enter number of seconds\n");
     scanf("%d",&seconds);
     days=seconds/86400;
     hours=seconds%86400/3600.0;
     minutes=seconds%86400%3600/60.0;
     printf("%d:%f:%f",days,hours,minutes);
     return 0;



}