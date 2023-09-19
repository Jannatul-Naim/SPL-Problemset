#include <stdio.h>
#include <math.h>
#define N 1000

int TakeInput(float array[N], int n)
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%f", &array[i]);
    return n;
}

float CalcMean(float array[N], int n)
{
    float total = 0.0;
    for (int i = 0; i < n; i++)
    {
        total += array[i];
    }
    return total / n;
}

float Calc_Std_deviation(float array[N], int n)
{
    float mean = CalcMean(array, n);
    float sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += (array[i] - mean) * (array[i] - mean);
    }
    float all = sum / n;
    return sqrt(all);
}

int main()
{
    float array[N];
    int n;
    n = TakeInput(array, n);
    printf("%.2f\n", Calc_Std_deviation(array, n));

    return 0;
}
