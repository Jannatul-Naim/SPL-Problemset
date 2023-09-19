#include <stdio.h>
int out(int num1, int num2)
{
    if (num1 > num2)
        return 1;
    else if (num1 < num2)
        return -1;
    else
        return 0;
}

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    if (out(n1, n2) == 1)
        printf("%d is greater than %d", n1, n2);
    else if (out(n1, n2) == -1)
        printf("%d is less than %d", n1, n2);
    else
        printf("%d is equal to %d", n1, n2);
}
