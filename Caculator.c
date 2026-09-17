#include <stdio.h>
int main()
{
    char operator;
    double num1, num2,result;
    printf("enter a number: ");
    scanf("%lf", &num1);
    printf("enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);    
    printf("enter another number: ");
    scanf("%lf", &num2);
    switch (operator)
    {
        case '+':
        result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
        break;
        case '-':
        result = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
        break;
        case '*':
        result = num1 * num2;   
        printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
        break;
        case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.");
        }
    }
}