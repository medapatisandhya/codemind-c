#include<stdio.h>
#include<math.h>
int main()
{
    float n,m,i,s=0;
    scanf("%f%f",&n,&m);
    for(i=n;i<=m;i++)
    {
        s=s+sqrt(i);
    }
    printf("%.2f",s);
}