#include<stdio.h>
int main()
{
    int n,arr[100];
    int skip[100];
    int sum=0;
    int items=0;
    int i,j;
    double res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        skip[i]=0;
    }
    for(i=0;i<n;i++)
    {
        int count=0;
        if(skip[i]) continue;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                ++count;
                skip[j]=1;
            }
        }
        if(arr[i]==count)
        {
            sum+=arr[i];
            ++items;
        }
    }
        
    if(items==0)
    {
        printf("-1");
    }
    else
    {
        res=((double)sum)/items;
        printf("%0.2f",res);
    }
    return 0;
}
