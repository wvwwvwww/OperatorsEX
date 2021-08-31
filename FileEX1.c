#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    // int c;
    char str[600];

    fp = fopen("file.txt", "r");
    while (fgets(str, 600, fp))
    {
        printf("%s", str);
    }

        // if (fgets(str, 60, fp) != NULL)
        // {
        //     //writing content to stdout
        //     puts(str);
        // }

        // fp = fopen("file.txt", "r");

        // if (fp == NULL)
        // {
        //     perror("Error opening file");
        //     return (-1);
        // }

        //read a single char
        // while ((c = fgetc(fp)) != EOF)
        // {
        //     printf("%c", c);
        // }

        fclose(fp);
        fp = NULL;

        return (0);
    }