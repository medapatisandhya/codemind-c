#include<stdio.h>
int main()
{
    int n,s=0,r;
    scanf("%d",&n);
    r=n;
    n=n*n;
    while(n)
    {
        int k=n%10;
        s=s+k;
        n=n/10;
    }
    if(r==s)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}