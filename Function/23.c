#include <stdio.h>
#define N 100

int str_length(char str[N])
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
        len++;

    return len;
}

int find_substr(char *s1, char *s2)
{
    int len1 = str_length(s1);
    int len2 = str_length(s2);

    for (int i = 0; i <= len1 - len2; i++)
    {
        int j;

        for (j = 0; j < len2; j++)
            if (s1[i + j] != s2[j])
                break;

        if (j == len2)
            return i;
    }

    return -1;
}

int main()
{
    char a[N];
    char b[N];
    scanf("%s", a);
    scanf("%s", b);
    int res = find_substr(a, b);
    if (res == -1)
        printf("0\n");
    else
        printf("1\n");
    return 0;
}
