#include <stdio.h>
int main()
{
    int n,m,c,i,j;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        c=0;
        if(i==1)
        {
            c=1;
        }
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%d
",i);
        }
    }
    
}