#include <stdio.h>

int Calculate(int sum, int n)
{
    return sum + n;
}

int main()
{
    int n, num;
    scanf("%d", &n);
    int sumFun = 0, sumMain = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sumMain += num;
        sumFun = Calculate(sumFun, num);
    }

    printf("Sum In Function: %d\nSum In Main: %d\n", sumFun, sumMain);

    return 0;
}