#include <stdio.h>
int main()
{
    int m,n,i,j,ar[100][100],s=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
            s=s+ar[i][j];
        }
    }
    printf("%d",s);
}
