#include <stdio.h>
#include <string.h>
#define N 1000

int len(char n[N], char str[N][N])
{
    int i = 0;
    int count1 = 0;
    int count2 = 0;
    for (i = 0; n[i] != 0; i++)

    {
        if (n[i + 1] == 0)
        {
            str[count1][count2] = n[i];
        }

        if (n[i] == ' ' || n[i + 1] == 0)
        {
            printf("%s ", str[count1]);
            count1++;
            count2 = 0;

            continue;
        }
        str[count1][count2] = n[i];
        count2++;
    }

    return count2++;
}
int main()
{

    char str[N];
    char string[N][N];
    int count;
    char OC;
    int big = 0;

    gets(str);
    int n = len(str, string);
    printf("\n");
    for (int i = n; i > 0; i--)
        printf("%s ", string[i - 1]);

    return 0;
}