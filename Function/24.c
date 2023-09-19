#include <stdio.h>

int LCM(int num1, int num2, int gcd);
int GCD(int num1, int num2);

void main()
{
    int num1, num2, gcd, lcm;
    scanf("%d %d", &num1, &num2);

    gcd = GCD(num1, num2);
    lcm = LCM(num1, num2, gcd);

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);
}
int GCD(int num1, int num2)
{
    int big, small, rem;
    big = (num1 > num2) ? num1 : num2;
    small = (num1 < num2) ? num1 : num2;
    rem = big % small;

    while (rem != 0)
    {
        big = small;
        small = rem;
        rem = big % small;
    }
    return small;
}

int LCM(int num1, int num2, int gcd)
{

    return (num1 * num2 / gcd);
}
