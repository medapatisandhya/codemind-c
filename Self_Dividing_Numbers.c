#include<stdio.h>
int sd(int n)
{
    int d,t,a=0,b=0;
    t=n;
    while(n)
    {
        d=n%10;//0
       if(d==0)
        {
            return 0;
        }
         if(t%d==0)
         {
             b++;
         }
         a++;
         n=n/10;
    }
    if(a==b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int v,k,r;
    scanf("%d %d",&v,&k);
    for(r=v;r<=k;r++)
    {
        if(sd(r))
        {
            printf("%d ",r);
        }
    }
}