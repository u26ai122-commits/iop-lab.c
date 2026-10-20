 xzzcvxvx#include<stdio.h>
 xzzcvxvx#include<stdio.h>
int main(){
    int s1,s2,s3,s4,s5; // s stands for subject.
    printf("Enter marks in s1\n");
    scanf("%d",&s1);
    printf("Enter marks in s2\n");
    scanf("%d",&s2);
    printf("Enter marks in s3\n");
    scanf("%d",&s3);
    printf("Enter marks in s4\n");
    scanf("%d",&s4);
    printf("Enter marks in s5\n");
    scanf("%d",&s5);
    int total=s1+s2+s3+s4+s5;
    printf("Total marks: %d\n", total);
    float percentage;
    percentage=total/500.0*100; // Each subject contains Maximum 100 marks.
    printf("Percentage %f\n",percentage);
    return 0;
}