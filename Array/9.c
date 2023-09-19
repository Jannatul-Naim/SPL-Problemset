#include <stdio.h>

int main() {
    int n, i, count = 0;

    scanf("%d", &n);
    char ch[n];

    for (i = 0; i < n; i++) {
        scanf(" %c", &ch[i]);
        if (ch[i] == 'a' || ch [i]== 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' ||ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')
            count++;
    }

    printf("Count: %d", count);

    return 0;
}
