#include<stdio.h>
int main()
{
    int n,s=0,i,s1=1,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s+r;
        s1=s1*r;
        
    }
    if(s==s1)
    {
    printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}