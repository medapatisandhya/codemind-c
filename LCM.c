#include <stdio.h>
int main()
{
    int n,m,g,l,i;
    scanf("%d%d" ,&n,&m);
    for(i=1;i<=n&&i<=m;i++)
    {
        if(m%i==0 && n%i==0)
        {
            g=i;
        }
    }
    l=(m*n)/g;
    {
        printf("%d" ,l);
    }
    
}