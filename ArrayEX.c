#include <stdio.h>
#define MONTHS 12

int main()
{
    int grades[10];
    int count = 10;
    long sum = 0;
    float average = 0.0f;

    printf("\nEnter the 10 grades: \n");

    //Read the ten numbers to be averaged
    int i;
    for (i = 0; i < count; ++i)
    {
        printf("%2u> ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    average = (float)sum / count;

    printf("\nAverage of the ten grades entered is: %2f\n", average);
    printf("\n");

    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < MONTHS; index++)
    {
        printf("Month %d has %2d days.\n", index + 1, days[index]);
    }

    int array_values[10] = {0, 1, 4, 9, 16};
    int x;

    for (x = 5; x < 10; ++i)
    {
        array_values[x] = x * x;
    }
    for (x = 0; x < 10; ++i)
    {
        printf("array_values[%i = %i\n", i, array_values[x]);
    }

    return 0;
}