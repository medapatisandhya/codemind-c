#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int s,a,b;
        scanf("%d%d",&a,&b);
        s=a+b;
        printf("%d
",s);
    }
}