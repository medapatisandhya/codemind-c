#include<stdio.h>
int main()
{
    int v,k=0,t;
    scanf("%d",&v);
    t=v;
    while(v>0)
    {
        v=v/10;
        k++;
        if(k==10 && v==0)
        {
            k--;
        }
    }
    if(k==9)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}