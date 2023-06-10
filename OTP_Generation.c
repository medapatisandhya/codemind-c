#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int i,k,j,l;
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        j=(s[i])-48;
        if(j%2!=0)
        {
            printf("%d",j*j);
        }
    }
}