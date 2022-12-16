#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     int ele,res=0;
     scanf("%d",&ele);
     for(i=0;i<n;i++)
    {
        if(ele==a[i])
        {
            res=1;
            break;
        }
    }
     if(res==1)
     {
         printf("True");
     }
    else
    {
         printf("False");
    }
}