#include<stdio.h>

int main(){
    int i,j;
    char ch='A';
    for(i=1;i<=5;i++){
     for(j=1;j<6-i;j++){
        printf(" ");

     }for(j=5;j>5-i;j--){
        printf("%c",ch);
     }ch++;
        printf("\n");
}
}