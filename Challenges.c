#include <stdio.h>
#include <stdlib.h>

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

    return 0;
}