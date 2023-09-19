#include <stdio.h>

int main()
{
    char p1[100000], p2[100000];
    int temp = 0, i, j;

    for (i = 0; temp != 10; i++)
    {
        scanf("%c", &p1[i]);
        temp = p1[i];
    }
    temp = 2;
    for (j = 0; temp != 10; j++)
    {
        scanf("%c", &p2[j]);
        temp = p2[j];
    }
    --i;
    for (int k = 0; k < i; k++)
        printf("%c", p1[k]);
    for (int k = 0; k < j; k++)
        printf("%c", p2[k]);
}
