#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    long double i;
    printf("sizeof int %lu\n", sizeof(i));
    printf("Enter a value: \n");
    scanf("%LF %s", &i, str);
    printf("\nYou entered: %LF %s\n", i, str);

    return 0;
}