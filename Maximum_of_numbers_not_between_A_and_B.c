#include<stdio.h>
int main()
{
    int n,arr[1000],a,b,i,c=0,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    m=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<a||arr[i]>b)
        {
            if(arr[i]>m)
            {
                c++;
                m=arr[i];
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",m);
    }
}