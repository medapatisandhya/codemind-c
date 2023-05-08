#include <stdio.h>
int main()
{
    int n,i,ar[10],list[10]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        list[ar[i]]++;
    }
    for(i=0;i<10;i++)
    {
        if(list[i]!=0)
        {
            printf("%d ",i);
        }
    }
}