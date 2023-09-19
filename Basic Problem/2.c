#include<stdio.h>
int main()
{
    float number, square;
    printf("Please Enter any integer Value : ");
    scanf("%f", &number);
    square = number * number;
    printf("%.2f", square);
    return 0;
}
