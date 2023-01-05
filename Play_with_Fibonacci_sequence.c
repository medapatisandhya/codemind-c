#include <stdio.h>
int main()
{
    int a=0,b=1,c,n,i,s=0;
    scanf("%d",&n);
    c=a+b;
    printf("%d %d ",a,b);
    for(i=3;i<=n;i++)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    
}