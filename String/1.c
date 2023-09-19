#include <stdio.h>
#define N 10000

int main()
{
    char s[N];
    int i;

    gets(s);
    for (i = 0; s[i]!= 0; i++);
    
    printf("%d", i);
    return 0;
}
