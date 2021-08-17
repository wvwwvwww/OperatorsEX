#include <stdio.h>

int main(void)
{

    int number_to_test, remainder;

    printf("Enter your number to be tested: ");
    scanf("%i", &number_to_test);

    remainder = number_to_test % 2;

    if (remainder == 0)
    {
        printf("\nThe number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }

    int number, sign;

    printf("\nPlease type in a number: ");
    scanf("%i", &number);

    if (number < 0)
    {
        sign = -1;
    }
    else if (number == 0)
    {
        sign = 0;
    }
    else
    {
        sign = 1;
    }

    printf("Sign = %i\n", sign);

    enum WEEKDAY
    {
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    };
    enum WEEKDAY today = Monday;

    switch (today)
    {
    case Sunday:
        printf("Today is Sunday.\n");
        break;
    case Monday:
        printf("Today is Monday.\n");
        break;
    case Tuesday:
        printf("Today is Tuesday.\n");
        break;
    default:
        printf("whatever\n");
        break;
    }

    float value1, value2;
    char operator;

    printf("\nType in your expression (no spaces!):\n");
    scanf("%f%c%f", &value1, &operator, & value2);

    switch (operator)
    {
    case '+':
        printf("%.2f\n", value1 + value2);
        break;
    case '-':
        printf("%.2f\n", value1 - value2);
        break;
    case '*':
        printf("%.2f\n", value1 * value2);
        break;
    case '/':
        if (value2 == 0)
        {
            printf("Division by zero. \n");
        }
        else
        {
            printf("%.2f\n", value1 / value2);
        }
        break;
    default:
        printf("Unknown operator. \n");
        break;
    }

    return 0;
}