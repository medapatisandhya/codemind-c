#include<stdio.h>
int main()
{
    int i,n,m,g;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n && i<=m;i++)
    {
        if(n%i==0 && m%i==0)
        g=i;
    }
    printf("%d",g);
}