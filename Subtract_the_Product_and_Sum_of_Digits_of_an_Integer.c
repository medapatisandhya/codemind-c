#include<stdio.h>
int main()
{
    int n,s=0,m=1,i,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        m=m*r;
        n=n/10;
    }
    i=m-s;
    printf("%d",);
}