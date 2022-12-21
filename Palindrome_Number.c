#include <stdio.h>
int main()
{
    int j,b;
    scanf("%d",&b);
    for(j=1;j<=b;j++)
    {
        int n,i,r=0,s=0,t;
        scanf("%d",&n);
        t=n;
        while(n!=0)
        {
            r=n%10;
            s=s*10+r;
            n=n/10;
        }
        if(s==t)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    
}