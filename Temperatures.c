#include <stdio.h>
int main()
{
    int n,br[2001];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&br[i]);
    }
    for(int l=0;l<n;l++)
    {
        int a=l,b=-1;
        for(int j=l+1;j<n;j++)
        {
            if(br[l]<br[j])
            {
                b=j;
                break;
            }
        }
        if(b==-1)
        {
            a=0;
        }
        else
        {
            a=b-a;
        }
        printf("%d ",a);
    }
    
}