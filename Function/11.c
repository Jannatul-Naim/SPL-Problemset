#include <stdio.h>
#define N 10000

int count(char s[N])
{
    int i;
    for (i = 0; s[i] != 0; i++)
        ;
    return i;
}

int main()
{
    char s[N];
    gets(s);
    printf("%d", count(s));
}