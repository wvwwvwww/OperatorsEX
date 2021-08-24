#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int arraySum(int *ptr, const int n);

int main(void)
{
    int values[120] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5, 8, 1, 5, 5};

    printf("The sum is %i\n", arraySum(values, sizeof(values) / sizeof(int)));

    return 0;
}

int arraySum(int *ptr, const int n)
{
    int sum = 0;
    int *const arrayEnd = ptr + n;

    for (; ptr < arrayEnd; ++ptr)
    {
        sum += *ptr;
    }
    return sum;
}
