#include <stdio.h>

// Define functions
void addition();
void subtraction();
void multiplication();
void division();

int main()
{

    printf("Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    int choice;

    scanf("%i", &choice);

    switch (choice)
    {
    case 1:
        addition();
        break;
    case 2:
        subtraction();
        break;
    case 3:
        multiplication();
        break;
    case 4:
        division();
        break;
    default:
        printf("Invalid operation\n");
        break;
    }

    return 0;
}

void addition()
{
    printf("Enter your first number\n");
    double num1;
    scanf("%lf", &num1);

    printf("Enter your second number\n");
    double num2;
    scanf("%lf", &num2);

    double result = num1 + num2;

    //TODO dynamic formatting based on tailing decimal digits
    printf("The result is %lf\n", result);
}

void subtraction()
{

    printf("Enter your first number\n");
    double num1;
    scanf("%lf", &num1);

    printf("Enter your second number\n");
    double num2;
    scanf("%lf", &num2);

    double result = num1 - num2;

    //TODO dynamic formatting based on tailing decimal digits
    printf("The result is %lf\n", result);
}

void multiplication()
{
    printf("Enter your first number\n");
    double num1;
    scanf("%lf", &num1);

    printf("Enter your second number\n");
    double num2;
    scanf("%lf", &num2);

    double result = num1 * num2;

    //TODO dynamic formatting based on tailing decimal digits
    printf("The result is %lf\n", result);
}

void division()
{

    printf("Enter your first number\n");
    double num1;
    scanf("%lf", &num1);

    printf("Enter your second number\n");
    double num2;
    scanf("%lf", &num2);

    double result = num1 / num2;

    //TODO dynamic formatting based on tailing decimal digits
    printf("The result is %lf\n", result);
}