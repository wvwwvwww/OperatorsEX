#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    int number = 0;
    int *pnumber = NULL;

    number = 10;
    printf("\nnumber's address: %p\n", &number);
    printf("number's value: %d\n\n", number);

    pnumber = &number;

    printf("pnumber's address: %p\n", (void *)&pnumber);
    printf("pnumber's size: %lu bytes\n", sizeof(pnumber));
    printf("pnumber's value: %p\n", pnumber);
    printf("value pointed to: %d\n", *pnumber);

    printf("\n");

    //SECOND EX (CHALLENGE)
    int num = 150;
    int *pNum = NULL;

    pNum = &num;

    printf("num address is: %p\n", &num);
    printf("Address of pNum: %p\n", &pNum);
    printf("value of the pNum: %p\n", pNum);
    printf("value of what pNum is pointing to: %d\n", *pNum);

    printf("\n");

    //THIRD EX
    long num1 = 0L;
    long num2 = 0L;
    long *pnumb = NULL;

    pnumb = &num1;
    *pnumb = 2L;
    ++num2;
    num2 += *pnumb;

    pnumb = &num2;
    ++*pnumb;

    printf("num1 = %ld   num 2 = %ld   *pnum = %ld   *pnum + num2 = %ld\n", num1, num2, *pnumb, *pnumb + num2);

    printf("\n");

    //FOURTH EX
    int integer = 10;
    float f = 2.34;
    char ch = 'e';

    void *vptr;

    vptr = &integer;
    printf("\nValue of integer = %d\n", *(int *)vptr);

    vptr = &f;
    printf("Value of f = %.2f\n", *(float *)vptr);

    vptr = &ch;
    printf("value of ch = %c\n", *(char *)vptr);

    printf("\n");

    return 0;
}