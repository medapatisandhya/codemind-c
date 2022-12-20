#include<stdio.h>
int main()
{
    int n,v=0,k=1,r,i,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        r=v+k;
        v=k;
        k=r;
        if(r==n)
        {
            j++;
        }
    }
    if(j!=0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}