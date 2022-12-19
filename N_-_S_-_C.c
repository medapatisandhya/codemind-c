#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i,k,l;
    scanf("%d%d",&n,&m);
    for(i=n+1;i<m;i++)
    {
        k=pow(i,2);
        l=pow(i,3);
        printf("%d %d %d
",i,k,l);
    }
}