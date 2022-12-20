#include<stdio.h>
int main()
{
    int n,k,v[2004]={0};
    scanf("%d",&n);
    while(n)
    {
        k=n%10;
        if(v[k]==1)
        {
            break;
        }
        else
        {
            v[k]=1;
        }
        n=n/10;
    }
    if(n)
    {
        printf("Not Unique Number");
    }
    else
    {
        printf("Unique Number");
    }
}