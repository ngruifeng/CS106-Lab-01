#include <stdio.h>

/* 
 * tmin - return minimum two's complement integer 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int tmin(void)
{
    return 1<<31;
}

int test_tmin(void)
{
    return 0x80000000;
}

int main(void)
{
    printf("expected: %x\n", tmin());
    printf("actual  : %x\n", test_tmin());
}
