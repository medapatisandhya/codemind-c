#include <stdio.h>
#include <math.h>
int main()
{
    int i,m;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        int n,i,m=0;
        scanf("%d",&n);
        i=sqrt(n);
        if(i*i==n)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    
}