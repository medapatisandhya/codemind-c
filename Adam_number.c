#include<stdio.h>
int main()
{
    int n,s=0,m,f=0;
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        int r=n%10;
        s=s*10+r;
        n=n/10;
    }
    int l=s*s;
    while(l!=0)
    {
        int k=l%10;
        f=f*10+k;
        l=l/10;
    }
    if(m*m==f)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}