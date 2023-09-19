#include <stdio.h>
#define N 1000

int Calculate(int sum, int n)
{
    return sum + n;
}

int main()
{
    int n, array[N];
    scanf("%d", &n);
    int sumFun = 0, sumMain = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        sumMain += array[i];
        sumFun = Calculate(sumFun, array[i]);
    }

    printf("Sum In Function: %d\nSum In Main: %d\n", sumFun, sumMain);

    return 0;
}