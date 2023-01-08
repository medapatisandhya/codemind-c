#include <stdio.h>
#include <math.h>
int main()
{
    long n,i,j,c=0;
    scanf("%ld",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(i*i+j*j==n)
            {
                c++;
            }
        }
    }
    if(c!=0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}