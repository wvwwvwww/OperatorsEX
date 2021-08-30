#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct date
{
    int month;
    int day;
    int year;
};

int main()
{
    struct date today, *datePtr;

    datePtr = &today;

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    datePtr->month = tm.tm_mon + 1;
    datePtr->day = tm.tm_mday;
    datePtr->year = tm.tm_year + 1900;

    printf("\n\nToday's date is %i/%i/%i.\n\n\n", datePtr->month, datePtr->day, datePtr->year);

    return 0;
}
