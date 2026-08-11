#include <stdio.h>

void BTWSMULT(int a, int b)
{
    int result = 0;
    while (b >0)
    {
        if (b & 1)
        {
            result = result + a;
        }
        a = a << 1;
        b = b >> 1;
    }
    printf("The result of bitwise multiplication is: %d\n", result);
}
int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    BTWSMULT(a, b);

    return 0;
}