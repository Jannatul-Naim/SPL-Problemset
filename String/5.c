#include <stdio.h>

int main()
{
    char s[100000];
    int temp = 0, i, count = 1;

    for (i = 0; temp != 10; i++)
    {
        scanf("%c", &s[i]);
        temp = s[i];
    }
    i = i - 2;
    for (; i >= 0; i--)
        printf("%c", s[i]);
}