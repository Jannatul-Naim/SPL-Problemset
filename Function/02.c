#include <stdio.h>
void out(char s)
{
    printf("Value received from main: %c", s);
}

int main()
{
    char s;
    scanf("%c", &s);
    out(s);
}
