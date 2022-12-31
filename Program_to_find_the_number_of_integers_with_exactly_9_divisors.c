#include<stdio.h>
int main()
{
    int n,i,v,k=0,l=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(v=1;v<=i;v++)
        {
        if(i%v==0)
        {
            k++;
        }
    }
    if(k==9)
    {
        l++;
        printf("%d ",i);
    }
    k=0;
    }
    printf("
Total=%d",l);
    return 0;
}