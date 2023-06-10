#include<stdio.h>
int rev(int n)
{
    int r,s=0;
    while(n)
    {
        r=n%10;
        s=s*10+r;
        n/=10;
    }
    return s;
}
int pn(int n)
{
    int r,s=0,t;
    t=n;
    while(n)
    {
        r=n%10;
        s=s*10+r;
        n/=10;
    }
    if(t==s)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int rp(int n)
{
    int r;
    r=rev(n);
    n+=r;
    if(pn(n))
    {
        printf("%d",n);
        return 0;
    }
    else
    {
        return rp(n);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    rp(n);
}