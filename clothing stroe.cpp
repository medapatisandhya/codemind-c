#include <stdio.h>
int main()
{
    int n,ar[100],i,list[200]={0},k,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        list[ar[i]]++;
    }
    for(i=0;i<200;i++)
    {
       if(list[i]%2==0)
       {
           k=list[i]/2;
       }
       else
       {
           k=(list[i]-1)/2;
       }
       s=s+k;
    }
    printf("%d",s);
    
}
