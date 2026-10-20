#include<stdio.h>

int main(){
    int M,P,C,E;
    float CM;
    printf("Enter marks in M\n");
    scanf("%d",&M);
    printf("Enter marks in P\n");
    scanf("%d",&P);
    printf("Enter marks in C\n");
    scanf("%d",&C);
    printf("Enter marks in E\n");
    scanf("%d",&E);
    CM=M/2.0+P/2.0+C/2.0+E/1.0;
    printf("Cutoff Marks=%f",CM);
    // Maximum marks in P,M,C are 200 and 100 in E.
    return 0;
}