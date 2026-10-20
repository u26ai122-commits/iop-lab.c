#include<stdio.h>

int main(){
    float c,f;
    printf("Enter temperature in Fahrenheit\n");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("Temperature in Celsius is %f",c);
    return 0;
}