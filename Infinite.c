#include<stdio.h>
int main()
{
    int n,l;
    while(n!=-1)
    {
        scanf("%d",&n);
        if(n==-1)
        {
            break;
        }
        printf("%d
",n*n);
    }
}