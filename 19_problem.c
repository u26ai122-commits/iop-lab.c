#include<stdio.h>

int main(){
    char ch,Lowercase,Not_Lowercase;
    Lowercase='L';
    Not_Lowercase='N';

    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("You entered: %c\n", ch);
    ch=(ch>='a' && ch<='z')?(Lowercase):(Not_Lowercase); 
    printf("Result: %c\n", ch);
    return 0;
}