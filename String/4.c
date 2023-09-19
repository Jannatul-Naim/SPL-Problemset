#include <stdio.h>

int main()
{
    char s[100000];
    int temp = 0, i, count = 1;

    for (i = 0; temp != 10; i++)
    {
        scanf("%c", &s[i]);
        temp = s[i];
        if (s[i] == ' ')
        {
            count++;
        }
    }
    printf("%d", count);
}