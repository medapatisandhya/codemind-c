#include<stdio.h>
int main()
{
    int n,i,sum=0,s;
    scanf("%d%d",&n,&s);
    for(i=n;i<=s;i++)
    {
        if(i%2==0)
        printf("%d ",i);
    }
}