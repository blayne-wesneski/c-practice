#include <stdio.h>

// Define functions
void addition();
void subtraction();
void multiplication();
void division();
double number();

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
    double num1 = number();
    double num2 = number();

    double result = num1 + num2;

    // TODO dynamic formatting based on tailing decimal digits
    printf("The result is %lf\n", result);
}

double number()
{
    double num;
    scanf("%lf", &num);
    return num;
}

void subtraction()
{

    double num1 = number();
    double num2 = number();

    double result = num1 - num2;

    // TODO dynamic formatting based on tailing decimal digits
    printf("The result is %lf\n", result);
}

void multiplication()
{

    double num1 = number();
    double num2 = number();

    double result = num1 * num2;

    // TODO dynamic formatting based on tailing decimal digits
    printf("The result is %lf\n", result);
}

void division()
{

    double num1 = number();
    double num2 = number();

    if (num2 == 0)
    {
        printf("Division by zero\n");
    }
    double result = num1 / num2;

    // TODO dynamic formatting based on tailing decimal digits
    printf("The result is %lf\n", result);
}