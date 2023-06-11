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
    for(i=0;i<n;i++)
    {
        if(arr[i]<a||arr[i]>b)
        {
            c++;
            printf("%d ",arr[i]);
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}