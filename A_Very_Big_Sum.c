#include <stdio.h>
int main()
{
    long long int n,ar[10],i,s=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+ar[i];
    }
    printf("%lld",s);
}