#include<stdio.h>
int main()
{
    int n,mi,ma,i;
    scanf("%d%d%d",&n,&mi,&ma);
    for(i=mi;i<=ma;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}