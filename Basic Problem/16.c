#include <stdio.h>
int main() {
    int dividend, divisor, q, r;
    scanf("%d %d", &dividend,&divisor);

    q = dividend / divisor;

    r = dividend % divisor;

    printf("Quotient: %d,", q);
    printf("Remainder: %d", r);
    return 0;
}

