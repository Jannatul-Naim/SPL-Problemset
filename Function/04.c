#include <stdio.h>
int out(int num)
{
    if (num > 0)
        return 1;
    else if (num < 0)
        return 0;
    else
        return -1;
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (out(n) == 1)
        printf("positive\n");
    else if (!out(n))
        printf("negative\n");
    else
        printf("zero\n");

    return 0;
}
