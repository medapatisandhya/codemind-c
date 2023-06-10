#include<stdio.h>
void pn(int s,int k)
{
    if(k>s)
    return;
    printf("%d ",k);
    pn(s,++k);
}
int main()
{
    int s,k=1;
    scanf("%d",&s);
    if(s>=1 && s<=1000)
    {
        pn(s,k);
    }
    else
    {
        printf("The Number Series is Not Possible Print");
    }
}