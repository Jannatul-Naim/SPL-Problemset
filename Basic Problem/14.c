#include <stdio.h>

int main() {
    int s1, s2, s3;

    scanf("%d %d %d", &s1, &s2, &s3);

    if((s1 + s2 > s3)&&(s2 + s3 > s1)
            &&(s3 + s1 > s2)) {
        printf("Valid Triangle\n");
    } else {
        printf("No a valid Triangle");
    }

    return 0;
}
