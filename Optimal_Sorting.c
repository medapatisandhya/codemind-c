#include<stdio.h>
int sort(int *v,int n)
{
    int k,r[2004],j,t;
    for(k=0;k<n;k++)
    {
        r[k]=v[k];
    }
    for(j=0;j<n-1;j++)
    {
        for(k=0;k<n-1;k++)
        {
            if(v[k]>v[k+1])
        	{
            	t=v[k+1];
            	v[k+1]=v[k];
            	v[k]=t;
        	}
        }
    }
    t=0;
    for(k=0;k<n;k++)
    {
        if(v[k]!=r[k])
        {
            t=1;
        }
    }
    if(t==1)
    {
        t=v[n-1]-v[0];
    }
    return t;
}
int main()
{
    int n,k,j,r,a,s=0;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        int v[2004];
        scanf("%d",&a);
        for(k=0;k<a;k++)
        {
            scanf("%d",&v[k]);
        }
        printf("%d
",sort(v,a));
    }
}