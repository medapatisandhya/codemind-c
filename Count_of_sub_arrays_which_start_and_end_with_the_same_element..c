#include <stdio.h>
int main()
{
    int n,s=0,br[2001],k;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&br[i]);
    }
    for(int r=0;r<n;r++)
    {
        for(int l=r+1;l<=n;l++)
        {
            if(br[r]==br[l-1])
            {
                s++;
            }
        }
    }
    printf("%d",s);
    
}
