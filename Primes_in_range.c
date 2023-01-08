#include <stdio.h>
#include <math.h>
int main()
{
    int n,m,i,j,c,s=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        c=1;
        for(j=2;j<=sqrt(i);
        j++)
        {
            if(i%j==0)
            {
                c=0;
                break;
            }
        }
        if(c && i!=1)
        {
            s++;
        }
    }
    printf("%d",s);

}