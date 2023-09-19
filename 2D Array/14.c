#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
        int arr[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int rem[10000] = {0};

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int temp = arr[i][j];

            if (rem[temp] == 0) {
                rem[temp] = 1;
            } else {
                arr[i][j] = -1;
            }

            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
