#include<stdio.h>
#include<math.h>
int main()
{
    int n,r=0,s=0,i,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=pow(i,2)+s;
        r=r+i;
        b=pow(r,2);
    }
    printf("%d",b-s);
}