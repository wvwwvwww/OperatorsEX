#include <stdio.h>

void multiplyTwoNumbers(int x, int y)
{
    int result = x * y;
    printf("The product of %d multiplied by %d is: %d\n", x, y, result);
}

int multiplyTwoNumbers2(int j, int k)
{
    int result2 = j * k;
    return result2;
}

int main(void)
{
    multiplyTwoNumbers(10, 20);
    multiplyTwoNumbers(20, 30);
    multiplyTwoNumbers(50, 2);

    int result2 = 0;
    result2 = multiplyTwoNumbers2(10, 20);

    printf("Result 2 is %d\n", result2);

    return 0;
}