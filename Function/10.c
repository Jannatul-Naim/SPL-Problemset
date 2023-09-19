#include <stdio.h>
#include <math.h>

int Calculate(int x, int y)
{
    return pow(x, y);
}

int main()
{
    int base, power;
    scanf("%d %d", &base, &power);
    printf("%d to the power %d is %d", base, power, Calculate(base, power));
}