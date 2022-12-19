#include<stdio.h>
int main()
{
    int x,a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    x=b*c;
    if(x>=a)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}