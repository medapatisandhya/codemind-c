#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int i,w=1;
    fgets(s,1000,stdin);
    int l=strlen(s);
    int k=65;
    for(i=0;i<l;i++)
    {
        if(s[i]>k)
        {
            k=s[i];
        }
    }
    printf("%c",k);
    return 0;
}

