#include<stdio.h>
int main()
{
    int n,r,i,s=0;
    scanf("%d",&n);
    r=n;
    while(n!=0)
    {
        s=s*10+n%10;
        n=n/10;
    }
    if(r==s)
    {
        printf("True");
    }
    else printf("False");
}