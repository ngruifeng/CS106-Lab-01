#include <stdio.h>

/* 
 * evenBits - return word with all even-numbered bits set to 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 8
 *   Rating: 1
 */
int evenBits(void)
{   
    return 0x55 | 0x55 << 8 | 0x55 << 16 | 0x55 << 24 ;
}

int test_evenBits(void)
{
    int result = 0;
    int i;
    for (i = 0; i < 32; i += 2)
        result |= 1 << i;
    return result;
}

int main(void)
{
    printf("expected: %x\n", evenBits());
    printf("actual  : %x\n", test_evenBits());
}
