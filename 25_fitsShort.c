#include <stdio.h>

/* 
 * fitsShort - return 1 if x can be represented as a 
 *   16-bit, two's complement integer.
 *   Examples: fitsShort(33000) = 0, fitsShort(-32768) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 8
 *   Rating: 1
 */
int fitsShort(int x)
{
    /* Short : 1000 0000 0000 0000 (TMin)
               ....
               1111 1111 1111 1111 (-1)
               0000 0000 0000 0000 (0)
               0000 0000 0000 0001 (1)
               0111 1111 1111 1111 (TMax)

       Extend short into int:
       1111 1111 1111 1111 1000 0000 0000 0000 (Short TMin)
       ...
       1111 1111 1111 1111 1111 1111 1111 1111 (-1)
       0000 0000 0000 0000 0000 0000 0000 0000 (0)
       0000 0000 0000 0000 0000 0000 0000 0001 (1)
       ...
       0000 0000 0000 0000 0111 1111 1111 1111 (Short TMax)

    */
    return !((x >> 15) ^ (x >> 16));
}

int test_fitsShort(int x)
{
    short int sx = (short int) x;
    return x == sx;
}

int main(void)
{
    int x = 0x00007fff + 1;
    printf("expected: %x\n", fitsShort(x));
    printf("actual  : %x\n", test_fitsShort(x));
}
