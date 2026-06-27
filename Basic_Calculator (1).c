#include <stdio.h>

int main()
{
    int choice;
    float num1, num2, result;

    printf("===== BASIC CALCULATOR =====\n");

    printf("\nSelect Operation:");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Modulus");

    printf("\n\nEnter your choice (1-5): ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(choice)
    {
        case 1:
            result = num1 + num2;
            printf("\nAddition = %.2f", result);
            break;

        case 2:
            result = num1 - num2;
            printf("\nSubtraction = %.2f", result);
            break;

        case 3:
            result = num1 * num2;
            printf("\nMultiplication = %.2f", result);
            break;

        case 4:
            if(num2 != 0)
            {
                result = num1 / num2;
                printf("\nDivision = %.2f", result);
            }
            else
            {
                printf("\nError: Cannot divide by zero");
            }
            break;

        case 5:
            printf("\nModulus = %d", (int)num1 % (int)num2);
            break;

        default:
            printf("\nInvalid Choice!");
    }

    printf("\n\nThank you for using calculator!");

    return 0;
}
