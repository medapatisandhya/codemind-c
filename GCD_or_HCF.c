#include<stdio.h>
int main()
{
    int n,i,m,s=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n&&i<=m;i++)
    {
        if(n%i==0 && m%i==0)
        {
            s=i;
        }
    }
    printf("%d",s);
}