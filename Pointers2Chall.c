#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void square(int *x);

int main()
{
    int *num = (int *)malloc(sizeof(int));
    *num = 4;

    square(num);
    printf("The square of the given number is %d\n", *num);

    return 0;
}

void square(int *x)
{
    *x = (*x) * (*x);
}
