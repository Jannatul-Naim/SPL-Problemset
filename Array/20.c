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
    int output[n+m];
    for(int i=0; i<n; i++)
    {
        output[i]=A[i];
    }
    int temp=n;
    for(int i=0; i<m; i++)
    {
        int rem=0;
        for(int j =0; j<n; j++)
        {
            if(B[i]==A[j])
            {
                rem++;
                break;
            }
        }
        if(rem==0)

        {
            output[temp]=B[i];
            temp++;
        }
    }
    for(int i =0; i<temp; i++)
        printf("%d ",output[i]);

}
