#include <stdio.h>

int main()
{
    char s[100000];
    int temp = 0, i;

    for (i = 0; temp != 10; i++)
    {
        scanf("%c", &s[i]);
        temp = s[i];
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    }
    i--;
    for (int j = 0; j < i; j++)
    {
        printf("%c", s[j]);
    }
}