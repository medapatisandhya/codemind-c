#include <stdio.h>
int main()
{
    int n,m,i,t,r,s,l;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        t=i;
        s=0;
        while(t)
        {
            r=t%10;
            s=s*10+r;
            t=t/10;
        }
        if(i==s)
        {
            printf("%d ",i);
        }
    }
    
}