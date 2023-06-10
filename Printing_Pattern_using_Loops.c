#include<stdio.h>
int main()
{
    int n,i,j,a;
    scanf("%d",&n);
    for(i=1;i<=(2*n)-1;i++)
    {
        a=n;
        for(j=1;j<=(2*n)-1;j++)
        {
            printf("%d ",a);
            if(j<i)
            a--;
            if(j>((2*n)-1-i))
            a++;
        }
        printf("
");
    }
}