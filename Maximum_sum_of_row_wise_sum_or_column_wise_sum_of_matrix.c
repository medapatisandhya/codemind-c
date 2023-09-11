#include<stdio.h>
int main()
{
    int n,i,j,c=0,r=0,m;
    scanf("%d%d",&n,&m);
    int ar[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        r=0;
        for(j=0;j<m;j++)
        {
            r+=ar[i][j];
        }
        if(r>c)
        {
            c=r;
        }
    }
    printf("%d",c);
}