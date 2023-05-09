#include <stdio.h>
int main()
{
    int N,rot,n,br[2004],i,t,r,l;
    scanf("%d %d %d",&N,&rot,&n);
    for(i=0;i<N;i++)
    {
        scanf("%d",&br[i]);
    }
    for(i=0;i<rot;i++)
    {
        t=br[N-1];
        for(r=N-1;r>0;r--)
        {
            br[r]=br[r-1];
        }
        br[0]=t;
    }
    for(r=0;r<n;r++)
    {
        scanf("%d",&l);
        printf("%d
",br[l]);
    }
    
}
