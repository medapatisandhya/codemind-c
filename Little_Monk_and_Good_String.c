#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000],max[100];
    scanf("%s",s);
    int l,i,c=0,m=0;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            c++;
        }
        else
        {
            if(c>m)
            {
                m=c;
            }
            c=0;
        }
    }
    if(c>m)
    {
        m=c;
    }
    printf("%d",m);
    
}