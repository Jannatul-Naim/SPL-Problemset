#include <stdio.h>

int main()
{
    char s[100000];
    int temp = 0, i, count = 0;

    for (i = 0; temp != 10; i++)
    {
        scanf("%c", &s[i]);
        temp = s[i];
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            count++;
        }
    }
    printf("%d", count);
}