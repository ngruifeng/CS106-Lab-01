#include <stdio.h>

/* 
 * bitNor - ~(x|y) using only ~ and & 
 *   Example: bitNor(0x6, 0x5) = 0xFFFFFFF8
 *   Legal ops: ~ &
 *   Max ops: 8
 *   Rating: 1
 */
int bitNor(int x, int y)
{
    return (~x) & (~y);
}

int test_bitNor(int x, int y)
{
    return ~(x | y);
}

int main(void)
{
    int x = 1;
    int y = 0;
    printf("expected: %x\n", bitNor(x, y));
    printf("actual  : %x\n", test_bitNor(x, y));
}
