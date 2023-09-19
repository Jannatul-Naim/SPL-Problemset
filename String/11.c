#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    int length = strlen(str) - 1;
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            int temp = str[i] - 48;
            sum += temp;
        }
    }
    printf("%d", sum);

    return 0;
}