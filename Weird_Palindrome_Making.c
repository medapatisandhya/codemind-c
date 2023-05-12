#include <stdio.h>
int main()
{
    int i,N;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        int ar[2001],n,r,k;
        scanf("%d",&n);
        for(k=0;k<n;k++)
        {
            scanf("%d",&ar[k]);
        }
        k=0;
        for(r=0;r<n;r++)
        {
            k+=(ar[r]%2);
        }
        printf("%d
",k/2);
        }
    
}