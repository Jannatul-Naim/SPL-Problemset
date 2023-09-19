#include <stdio.h>
#include <string.h>
#define N 100

int find_substr(char s1[N], char s2[N])
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (int i = 0; i <= len1 - len2; i++)
    {
        int j;
        for (j = 0; j < len2; j++)
            if (s1[i + j] != s2[j])
                break;

        if (j == len2)
            return 1;
    }

    return 0;
}

int main()
{
    char a[N];
    char b[N];
    scanf("%s", a);
    scanf("%s", b);
    printf("%d", find_substr(a, b));
    return 0;
}
