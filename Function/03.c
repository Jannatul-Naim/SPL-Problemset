
#include <stdio.h>
int out(int num)
{
    if (num % 2 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    if (out(n))
        printf("even\n");
    else
        printf("odd\n");

    return 0;
}
