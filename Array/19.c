#include <stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0; i<n; i++)
        scanf("%d",&A[i]);

    int m;
    scanf("%d",&m);
    int B[m];
    for(int i=0; i<m; i++)
        scanf("%d",&B[i]);

    int temp=0;
    int output[1000];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(A[i]==B[j])
            {
                output[temp]=A[i];
                temp++;
            }
        }
    }
    if(temp==0)
        printf("Empty set");
    else
    {
        for(int i =0; i<temp; i++)
            printf("%d ",output[i]);
    }
}
