#include<stdio.h>
int main()
{
    int i,n,m,l;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&l);
    m=ar[0];
    for(i=0;i<n;i++)
    {  
        if(ar[i]>m)
        {
            m=ar[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]+l>=m)
        { 
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}