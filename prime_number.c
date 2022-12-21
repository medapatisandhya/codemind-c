#include <stdio.h>
int main()
{
    int i,n,temp=0;
    scanf("%d",&n);
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        temp=temp+1;
    }
    if(temp==0 && n!=1)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
    
}