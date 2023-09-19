#include <stdio.h>
#define N 1000

int main()
{
    char inputString[N];
    char searchWord[N];
    int count = 0;

    gets(inputString);
    scanf("%s", searchWord);

    int i = 0;
    while (inputString[i] != '\0')
    {
        int j = 0;
        int match = 1;
        while (searchWord[j] != '\0')
        {
            if (inputString[i + j] != searchWord[j])
            {
                match = 0;
                break;
            }
            j++;
        }

        if (match && (inputString[i + j] == ' ' || inputString[i + j] == '\0'))
        {
            count++;
        }

        i++;
    }

    printf("%d\n", count);

    return 0;
}
