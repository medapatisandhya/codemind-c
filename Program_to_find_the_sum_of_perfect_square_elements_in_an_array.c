#include <stdio.h>
int main()
{
    int n,a[100],i,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<=a[i];j++)
        {
            if(j*j==a[i])
            {
                sum=sum+a[i];
            }
        }
    }
    printf("%d",sum);
    
}