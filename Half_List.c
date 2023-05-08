
#include <stdio.h>
int main()
{
    int n,ar[10],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=n-1;i>=n/2;i--)
    {
        printf("%d ",ar[i]);
    }
    for(i=0;i<n/2;i++)
    {
        printf("%d ",ar[i]);
    }
}
