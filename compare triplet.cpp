#include <stdio.h>
int main()
{
    int b[2001],r[2001],i,n=0,m=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&r[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(r[i]>b[i])
        {
            n++;
        }
        else if(r[i]<b[i])
        {
            m++;
        }
    }
    printf("%d %d",n,m);
    return 0;
    
}
