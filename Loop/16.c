#include <stdio.h>

int main()
{
    int n1, n2, max;

    scanf("%d %d", &n1, &n2);

    max = (n1 > n2) ? n1 : n2;

    for(;; max++)
    {
        if ((max % n1 == 0) && (max % n2 == 0))
        {
            printf("GCD: %d\nLCM: %d",(n1*n2)/max, max);
            break;
        }
    }
    return 0;
}
