#include<stdio.h>
int main()
{
    int n,r,f,s,t,l;
    scanf("%d",&n);
    l=n%10;
    n=n/10;
    t=n%10;
    n=n/10;
    s=n%10;
    n=n/10;
    f=n%10;
    n=n/10; 
    if(f==6)
    {
        f=9;
    }
    else if(s==6)
    {
        s=9;
    }
    else if(t==6)
    {
        t=9;
    }
    else if(l==6)
    {
        l=9;
    }
    printf("%d%d%d%d",f,s,t,l);
}