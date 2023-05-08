#include <stdio.h>
int main()
{
    int n,i,ar[10],k=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            c++;
        }
        else
        {
            k++;
        }
    }
    printf("%d %d",c,k);
}
