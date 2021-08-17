#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MONTHS 12
#define YEARS 5

int main()
{
    int primes[50] = {0};
    int primeIndex = 2;

    bool isPrime;

    //hardcode prime numbers
    primes[0] = 2;
    primes[1] = 3;

    for (int p = 5; p <= 100; p = p + 2)
    {
        isPrime = true;

        for (int i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
            if (p % primes[i] == 0)
                isPrime = false;

        if (isPrime == true)
        {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    for (int i = 0; i < primeIndex; ++i)
    {
        printf("%i ", primes[i]);
    }

    printf("\n");

    float rain[YEARS][MONTHS] =
        {{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
         {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
         {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
         {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
         {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}};

    float subtot, total;

    printf("YEAR\t\tRAINFALL (inches)\n");

    for (int year = 0, total = 0; year < YEARS; year++)
    {
        for (int month = 0, subtot = 0; month < MONTHS; month++)
        {
            subtot += rain[year][month];
        }
        printf("%5d \t%15.lf\n", 2020 + year, subtot);
        total += subtot;
    }
    printf("\nThe yearly average is %.lf inches.\n\n", total / YEARS);

    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");

    for (int month = 0; month < MONTHS; month++)
    {
        for (int year = 0, subtot = 0; year < YEARS; year++)
            subtot += rain[year][month];

        printf("%4.lf ", subtot / YEARS);
    }

    printf("\n");

    return 0;
}