#include <stdio.h>
int main()
{
    int n,ar[500],i,c,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
     for(i=0;i<n;i++)
     {
         c=0;
         for(j=0;j<n;j++)
         {
             if(ar[i]==ar[j])
             {
                 c++;
             }
         }
         if(c==1)
         {
             printf("%d ",ar[i]);
         }
     }
     return 0;
}