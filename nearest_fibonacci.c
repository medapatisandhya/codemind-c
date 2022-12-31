#include <stdio.h>
#include <math.h>
int main()
{
    int n,a=0,b=1,c,s=0;
    scanf("%d",&n);
    c=a+b;
    while(c<=n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    s=(abs(c-n)>=abs(b-n))?b:c;
    if((abs(c-n)==abs(b-n)))
    {
        printf("%d %d",b,c);
    }
    else
    {
        printf("%d",s);
    }
}