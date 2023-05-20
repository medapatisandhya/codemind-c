#include <stdio.h>
#include <string.h>
int main()
{
    char s[200];
    int i,c=0,l,a;
    fgets(s,200,stdin);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            c=c+(s[i]-'0');
        }
    }
    printf("%d",c);
   
    return 0;
}