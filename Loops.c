#include <stdio.h>

int main(void)
{
    // for loop
    unsigned int sum = 0;   // Stores the sum of the integers
    unsigned int count = 0; // The number of integers to be summed

    // Read the number of integers to be summed
    printf("\nEnter the number of integers you want to sum: ");
    scanf(" %u", &count);

    // Sum integers from 1 to count
    unsigned int i;
    for (i = 1; i <= count; ++i)
    {
        printf("inside loop ");
        sum += i;
    }
    printf("\nTotal of the first %u numbers is %u\n", count, sum);
    printf("\n");

    // while loop
    int number = 4;
    do
    {
        printf("\nNumber = %d", number);
        number++;
    } while (number < 4);

    //Continue Example
    enum DAY
    {
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    };

    for (enum DAY day = Monday; day <= Sunday; ++day)
    {
        if (day == Wednesday)
            continue;

        printf("It's not Wednesday!\n");
        /* Do something useful with day */
    }

    return 0;
}