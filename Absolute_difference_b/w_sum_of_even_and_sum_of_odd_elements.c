#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0,sum1=0,diff;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum=sum+a[i];
        }
        else
        {
            sum1=sum1+a[i];
        }
    }
    diff=abs(sum-sum1);
    printf("%d",diff);
}