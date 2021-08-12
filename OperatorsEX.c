#include <stdio.h>

int main()
{
    // Arithmetic Operators (caculations)
    int x = 33;
    int y = 15;
    int result1 = 0;

    printf("x is %d\n", ++x); // or " -- "
    
    // Logical Operators (sometimes called a Boolean Operator)
    _Bool a = 1;
    _Bool b = 1;
    _Bool result;

    result = a && b;

    printf("\nresult 1 : %d", result);

    _Bool c = 0;
    _Bool d = 0;
    _Bool result2;

    result2 = c || d;

    printf("\nresult 2 : %d\n", result2);

    // Compound Statments 

    int index = 0;
    
    // Bitwise Operators
    unsigned int i = 60; // 0011 1100
    unsigned int j = 13; // 0000 1101
    int resulti = 0;

    resulti = i >> 4;
        // 0000 0011
    printf("\nresult 3 is %d", resulti);

    int result3 = 0;
    result3 = i | j;
        // 0011 1101
    printf("\nresult 4 is %d", result3);

    int result4 = 0;
    result4 = i ^ j;
        //0011 0001
    printf("\nresult 5 is %d", result4);

    int result5 = 0;
    result5 = ~i;
        // 0011 1100 to 1100 0011
    printf("\nresult 6 is %d", result5);

    int result6 = 0;
    result6 = i << 4;
        // 0011 1100 0000
    printf("\nresult 7 is %d", result6);

     int result7 = 0;
    result7 = i >> 4;
        // 0000 0011
    printf("\nresult 8 is %d\n", result7);

     while (index < 3)
    {
        printf("\n+1");
        index = index + 1;
    }
        printf("\n");

    return 0;
}