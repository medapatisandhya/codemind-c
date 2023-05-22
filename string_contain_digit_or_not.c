#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int i,w=0;
    fgets(s,1000,stdin);
    int l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            w++;
        }
    }
    if(w!=0)
    {
    printf("Contains %d digit",w);
    }
    else
    {
        printf("Doesn't contain digit");
    }
    return 0;
}
