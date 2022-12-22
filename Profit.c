#include<stdio.h>
int main()
{
    int sp,cp,p,l;
    scanf("%d%d",&cp,&sp);
    p=sp-cp;
    l=cp-sp;
    if(sp>cp)
    {
        printf("Profit");
    }
    else
    {
        printf("Loss");
    }
}