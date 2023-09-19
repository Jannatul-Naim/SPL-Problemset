#include <stdio.h>
#include <string.h>
#define N 1000

int main()
{
    char s[N];
    int temp = 0;

    gets(s);
    int n = strlen(s);

    for (int j = 0; j < n / 2; j++)
    {
        if (s[j] != s[n - j - 1])
        {
            temp++;
            break;
        }
    }

    if (!temp)
    {
        printf("yes\n");
    }
    else
        printf("no\n");
}