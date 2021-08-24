#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int stringLength(const char *string);

int main()
{
    printf("\n%d \n", stringLength("stringLength test"));
    printf("%d \n", stringLength(""));
    printf("%d \n", stringLength("jason"));

    printf("\n");

    return 0;
}

// int stringLength(const char *string)
// {
//     const char *lastAddress = string;

//     while (*lastAddress)
//     {
//         ++lastAddress;
//     }
//     return lastAddress - string;
// }

int stringLength(const char *ptString)
{
    int count = 0;
    while (*ptString)
    {
        count++;
        ptString++;
    }

    return count;
}