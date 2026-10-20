#include<stdio.h>

int main(){
    float b,h,area; 
    //b is base length and h is vertical height of trianglr and we are going to calculate area of a triangle.
    printf("Enter Base Length and Enter Vertical Height\n");
    scanf("%f,%f",&b,&h);
    area=b*h/2;
    printf("Area of the triangle is %f",area);
    return 0;

}