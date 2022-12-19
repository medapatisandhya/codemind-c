#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,c=0,r=0,b;
    scanf("%d",&n);
    b=log10(n)+1;
    while(n!=0)
    {
        m=n%10;
        n=n/10;
        if(m%2==0)
        c++;
    }
    if(c==b)
    {
        printf("Even");
    }
    else if(c==0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}