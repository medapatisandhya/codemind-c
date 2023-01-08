#include <stdio.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        int l,r,s,i,c=0;
        scanf("%d%d",&l,&r);
        for(i=l;i<=r;i++)
        {
            s=i%10;
            if(s==2 || s==3 || s==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
    
}