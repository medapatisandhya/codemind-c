#include<stdio.h>
int pal(int a)
{
    int b,r,s=0;
    b=a;
    while(a)
    {
        r=a%10;
        s=s*10+r;
        a/=10;
    }
    if(s==b)
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
    int r,v,k;
    scanf("%d",&r);
    for(v=r-1;;v--)
    {
        if(pal(v))
        {
            break;
        }
    }
    for(k=r+1;;k++)
    {
        if(pal(k))
        {
            break;
        }
    }
    if(k-r==r-v)
    {
        printf("%d %d",v,k);
    }
    else if(k-r>v-r)
    {
        printf("%d",v);
    }
    else
    {
        printf("%d",k);
    }
}