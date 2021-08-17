#include <stdio.h>
#include <stdlib.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40

int main()
{
    // Challenge 1
    int minutesEntered = 0;
    double years = 0.0;
    double days = 0;
    double minutesInYear = 0;

    printf("\nPlease enter the number of minutes: ");
    // get input from user
    scanf("%d", &minutesEntered);

    minutesInYear = (60 * 24 * 365);

    years = (minutesEntered / minutesInYear);
    days = (minutesEntered / 60.0) / 24.0;

    printf("\n%d minutes is approximately %f years and %f days\n", minutesEntered, years, days);

    // Challenge 2
    printf("\nVariables of type char occupy %lu byte(s)\n", sizeof(char));
    printf("Variables of type short occupy %lu byte(s)\n", sizeof(short));
    printf("Variables of type int occupy %lu byte(s)\n", sizeof(int));
    printf("Variables of type long occupy %lu byte(s)\n", sizeof(long));
    printf("Variables of type long long occupy %lu byte(s)\n", sizeof(long long));
    printf("Variables of type float occupy %lu byte(s)\n", sizeof(float));
    printf("Variables of type double occupy %lu byte(s)\n", sizeof(double));
    printf("Variables of type long double occupy %lu byte(s)\n", sizeof(long double));
    printf("\n");

    // Sat Aug 14 2021 Challenge : Determine the amount of weekly Pay

    // declare variables
    int hours = 0;
    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;

    printf("Please enter the number of hours worked this week: ");

    // get the input
    scanf("%d", &hours);

    // caculate the gross pay
    if (hours <= 40)
    {
        grossPay = hours * PAYRATE;
    }
    else
    {
        grossPay = 40 * PAYRATE;
        double overTimePay = (hours - 40) * (PAYRATE * 1.5);
        grossPay += overTimePay;
    }

    // caculate taxes
    if (grossPay <= 300)
    {
        taxes = grossPay * TAXRATE_300;
    }
    else if (grossPay > 300 && grossPay <= 450)
    {
        taxes = 300 * TAXRATE_300;
        taxes += (grossPay - 300) * TAXRATE_150;
    }
    else if (grossPay > 450)
    {
        taxes = 300 * TAXRATE_300;
        taxes += 150 * TAXRATE_150;
        taxes += (grossPay - 450) * TAXRATE_REST;
    }

    // caculate the netpay
    netPay = grossPay - taxes;

    // display output
    printf("Your gross pay this week is: %.2f\n", grossPay);
    printf("Your taxes this week is: %.2f\n", taxes);
    printf("Your net pay this week is: %.2f\n", netPay);
    printf("\n");

    return 0;
}