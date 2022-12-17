#include<stdio.h>
int main()
{
    int n,i,av,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    av=sum/n;
    int flag=0;
    for(i=0;i<n;i++)
    {
        if(av==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}