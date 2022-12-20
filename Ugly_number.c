#include<stdio.h>
int main()
{
    int v,k=0;
    scanf("%d",&v);
    while(v!=1)
    {
        if(v%2==0)
        {
            v/=2;
        }
        else if(v%3==0)
        {
            v/=3;
        }
        else if(v%5==0)
        {
            v/=5;
        }
        else
        {
            k++;
            break;
        }
    }
    if(k!=0)
    {
        printf("Not Ugly Number");
    }
    else
    {
        printf("Ugly Number");
    }
}