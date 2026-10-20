#include<stdio.h>

int main(){
    float basic_salary;
    float HRA,DA;
    printf("Basic Salary\n");
    scanf("%f",&basic_salary);
    printf("Enter HRA\n");
    scanf("%f",&HRA);
    printf("Enter DA\n");
    scanf("%f",&DA);
    float gross_salary=basic_salary + basic_salary*HRA/100 + basic_salary*DA/100;
    printf("Gross Salary is %f",gross_salary);
    return 0;
}