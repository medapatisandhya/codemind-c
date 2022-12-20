#include<stdio.h>
#include<math.h>
int main()
{
    int n,v,a=0,k,m,l,b,c;
    scanf("%d %d",&n,&m);
    l=n;
    while(n)
    {
        n/=10;
        a++;
    }
    n=l;
    b=pow(10,m);
    c=pow(10,a-m);
    v=n%b;
    k=n/c;
    printf("%d",abs(v-k));
}