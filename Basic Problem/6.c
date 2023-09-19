#include <stdio.h>

int main() {

    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num <= 0.0) {
        if (num == 0.0)
            printf("Zero");
        else
            printf("Negative");
    }
    else
        printf("Positive");

    return 0;
}
