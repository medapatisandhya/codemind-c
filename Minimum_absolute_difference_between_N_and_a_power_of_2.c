#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,a,r,rd,ld,d;
    scanf("%d",&n);
    int l=pow(2,floor(log2(n)));
    r=l*2;
    rd=abs(n-r);
    ld=abs(n-l);
    if(rd<ld)
    {
        printf("%d",rd);
    }
    else
    {
        printf("%d",ld);
    }
}