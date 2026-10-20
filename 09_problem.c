#include<stdio.h>

int main(){
    int Hours,Minutes,Seconds;
    printf("Enter Hours:Minutes:Seconds\n");
    scanf("%d:%d:%d",&Hours,&Minutes,&Seconds);
    int seconds=Hours*3600+Minutes*60+Seconds;
    printf("Total Seconds=%d",seconds);
    return 0;
}