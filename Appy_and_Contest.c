#include <stdio.h>
int main()
{
    int j,m;
    scanf("%d",&m);
    for(j=1;j<=m;j++)
    {
    int n,a,b,k,z[4]={n,a,b,k},l,g,c,i;
    scanf("%d%d%d%d",&n,&a,&b,&k);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            g=i;
        }
    }
    l=(a*b)/g;
    c=(n/a)+(n/b)-(n*2)/l;
    if(c>=k)
    {
        printf("Win
");
    }
    else
    {
        printf("Lose
");
    }
    }
}