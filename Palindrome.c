#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int rev=0,t=n;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    if(t==rev)
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