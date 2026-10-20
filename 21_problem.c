#include <stdio.h>

int main()
{
    float a, b, result;
    char op;
    printf("Enter two numbers a and b:\n ");
    scanf("%f %f", &a, &b);
    printf("Enter an operator (+,-,*,/): ");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        result = a + b;
        printf("Result=%f\n", result);
        break;
    case '-':
        result = a - b;
        printf("result=%f\n", result);
        break;
    case '*':
        result = a * b;
        printf("result=%f\n", result);
        break;
    case '/':
    
        if (b != 0)
        {
            result = a / b;
            printf("result=%f\n", result);
        }
        else
        {
            printf("Error:Division by zero is not allowed\n");
        }
               break;
    default:
        printf("Error:Invalid operator\n");
}   
    return 0; 

}