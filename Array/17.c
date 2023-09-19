#include <stdio.h>

void main() {
    int n,i,j,temp;
    scanf("%d", &n);

    int input[n];
    for ( i = 0; i < n; i++) {
        scanf("%d", &input[i]);
    }

    for ( i = 0; i < n - 1; i++) {
        for ( j = 0; j < n - i - 1; j++) {
            if (input[j] > input[j + 1]) {
                temp = input[j];
                input[j] = input[j + 1];
                input[j + 1] = temp;
            }
        }
    }
    for ( i = 0; i < n; i++) {
        printf("%d ", input[i]);
    }

}
