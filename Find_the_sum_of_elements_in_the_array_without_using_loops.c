#include <stdio.h>
int main()
{
    int n,i,s=0,ar[100];
    scanf("%d" ,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d" ,&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i>=1 || i<=30)
        {
            s=s+ar[i];
        }
    }
    if(n>=1 || n<=30)
    {
        printf("%d" ,s);
    }
    else
    {
        printf("Enter a Valid Enter" );
    }
    
}