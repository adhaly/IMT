#include <stdio.h>
void BTWSTOGGL (int a, int b, int c)
{
 b = 1 << c; 
 a = a ^ b; 
 printf("The number after toggling the bit is: %d\n", a);
}

int main()
{
    int bits, position, number;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Enter the position of the bit to toggle: ");
    scanf("%d", &position);
    BTWSTOGGL(number, bits, position);
    return 0;
}