#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    // EX 1
    char text[100];
    char substring[40];

    printf("Enter the string to be searched (less than %d characters):\n", 100);
    // scanf("%s", text);
    fgets(text, sizeof(char) * 100, stdin);

    printf("\nEnter the string sought (less than %d characters):\n", 40);
    // scanf("%s", substring);
    fgets(substring, sizeof(char) * 100, stdin);

    printf("\nFirst string entered:\n%s\n", text);
    printf("Second string entered:\n%s\n", substring);

    // Convert both strings to uppercase
    for (int i = 0; (text[i] = (char)toupper(text[i])) != '\0'; ++i)
        ;
    for (int i = 0; (substring[i] = (char)toupper(substring[i])) != '\0'; ++i)
        ;

    printf("The second string %s found in the first.\n", ((strstr(text, substring) == NULL) ? "was not" : "was"));

    // EX 2
    printf("\n");

    double value = 0;
    char str[] = "3.5 2.5 1.26";
    char *pstr = str;
    char *ptr = NULL;

    while (true)
    {
        value = strtod(pstr, &ptr);
        if (pstr == ptr)
            break;
        else
        {
            printf(" %f\n", value);
            pstr = ptr;
        }
    }

    return 0;
}