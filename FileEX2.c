#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;

    fp = fopen("File2.txt", "w+");

    if (fp != NULL)
    {
        fprintf(fp, "%s %s %s %s %d", "Hello", "my", "number", "is", 555);
    }

    fclose(fp);

    return (0);
}