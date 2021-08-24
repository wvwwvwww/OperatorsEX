#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char multiple[] = "a string";
    char *p = multiple;

    for (int i = 0; i < strlen(multiple); ++i)
    {
        printf("\nmultiple[%d] = %c", i, multiple[i]);
        printf(" *(p+%d) = %c", i, *(p + i));
        printf(" &multiple[%d] = %p ", i, p + i);
        printf("p+%d = %p\n", i, &multiple[i]);
    }

    printf("\n");

    //EX 2
    long multiple1[] = {15L, 25L, 35L, 45L};
    long *pt = multiple1;

    for (int x = 0; x < sizeof(multiple1) / sizeof(multiple1[0]); ++x)
    {
        printf("address pt+%d (&multiple1[%d]):", x, x);
        printf(" %llu ", (unsigned long long)(pt + x));
        printf(" *(pt+%d) value: %ld\n", x, *(pt + x));
    }

    printf("\n  Type long occupies: %lu bytes\n", sizeof(long));

    return 0;
}