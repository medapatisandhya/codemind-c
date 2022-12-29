#include<stdio.h>
int main()
{
    int n,i,res=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        res=res*i;
    }
    printf("%d",res);
}