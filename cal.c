#include <stdio.h>
#include <stdlib.h>
void main()
{
    float num1, num2, result = 0;
    char op;
    printf("Enter the values\n");
    scanf("%f%f", &num1, &num2);
    printf("Enter the operator\n");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            break;
        }
        else
        {
            printf("Division by 0 not possible\n");
            exit(1);
        }
    default:
        printf("Invalid operator\n");
        exit(1);
    }
    printf("Result:%.2f %c %.2f=%.2f\n", num1, op, num2, result);
}