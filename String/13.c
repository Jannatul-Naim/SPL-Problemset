#include <stdio.h>
#define N 1000

int main()
{

    char str[N];
    int flag;

    gets(str);
    for (int i = 0; str[i] != 0; i++)
    {
        flag = 0;
        for (int j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
            printf("%c", str[i]);
    }
}