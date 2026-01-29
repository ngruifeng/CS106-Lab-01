#include <stdio.h>

/*
 * isZero - returns 1 if x == 0, and 0 otherwise 
 *   Examples: isZero(5) = 0, isZero(0) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 2
 *   Rating: 1
 */
int isZero(int x)
{
    return x == 0;
}

int test_isZero(int x)
{
    return !x;
}

int main(void)
{
    int x = 0;
    printf("expected: %x\n", isZero(x));
    printf("actual  : %x\n", test_isZero(x));
}
