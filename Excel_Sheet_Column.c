#include<stdio.h>
int main()
{
    int n,i,c=0,ar[2001];
    scanf("%d",&n);
    while(n>0)
    {
        ar[c++]=(65+(n-1)%26);
        n=(n-1)/26;
    }
    for(c=c-1;c>=0;c--)
    {
        printf("%c",ar[c]);
    }
}