#include<stdio.h>
int main()
{
    int n,i,j,v=0,k=0,m=0,p=0,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            v++;
        }
    }
    if(v!=2)
    {
        printf("Not Mega Prime");
    }
    else
    {
        while(n>0)
        {
            r=n%10;
            for(j=r;j>0;j--)
            {
                if(r%j==0)
                {
                    k++;
                }
            }
            if(k==2)
            {
                m++;
            }
            n=n/10;
            p++;
            k=0;
        }
        if(p==m)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
}