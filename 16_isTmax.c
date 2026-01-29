#include <stdio.h>

/*
 * isTmax - returns 1 if x is the maximum, two's complement number,
 *     and 0 otherwise 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 10
 *   Rating: 1
 */
int isTmax(int x)
{
    return !(x ^ ~(1<<31));
}

int test_isTmax(int x)
{
    return x == 0x7FFFFFFF;
}

int main(void)
{
    int x = 0;
    printf("expected: %x\n", isTmax(x));
    printf("actual  : %x\n", test_isTmax(x));
}
