#include <stdio.h>
int main()

{
    char s;
    int i=1;

    for (;; i++)
    {
        scanf(" %c",&s);

        if (s== 'A')
        {
            break;
        }
        else
        {
            printf("Input %d :%c\n",i,s);
        }
    }

    return 0;
}

