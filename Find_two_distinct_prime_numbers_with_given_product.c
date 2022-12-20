#include<stdio.h>
int main()
{
    int n,c=0,i,s=1;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            s=s*i;
            printf("%d ",i);
        }
    }
    if(n!=s)
    {
        printf("-1");
    }
}