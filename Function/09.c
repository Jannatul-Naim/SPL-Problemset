#include <stdio.h>

long int usingRecursive(int n)
{
    if (n >= 1)
        return n * usingRecursive(n - 1);
    else
        return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", usingRecursive(n));
}