#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str1[] = "To be or not to be ";
    char str2[] = ",that is the question";
    unsigned int count = 0; // Stores the string length

    while (str1[count] != '\0')
        ++count;

    printf("\nThe length of the string \"%s\" is %d characters.\n\n", str1, count);

    count = 0;
    while (str2[count] != '\0')
        ++count;

    printf("The length of the string \"%s\" is %d characters.\n\n", str2, count);

    printf("\n");

    return 0;
}
