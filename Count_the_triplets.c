#include <stdio.h>
int pres(int r,int *k,int i)
{
    int v;
    for(v=0;v<i;v++)
    {
        if(k[v]==r)
        {
            return 1;
        }
    }
    return 0;
    
}
int main()
{
    int n,i,N,vk[2004],a,v,k;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&n);
        for(v=0;v<n;v++)
        {
            scanf("%d",&vk[v]);
        }
        a=-1;
        for(v=0;v<n-1;v++)
        {
            for(k=v+1;k<n;k++)
            {
                if(pres(vk[v]+vk[k],vk,n))
                {
                    a++;
                }
            }
        }
        if(a!=-1)
        {
            a++;
        }
        printf("%d
",a);
    }
    
}
