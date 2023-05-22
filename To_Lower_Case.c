#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char ch[100];
    scanf("%s",ch);
    int i;
    int l=strlen(ch);
    for(i=0;i<l;i++)
    {
        printf("%c",tolower(ch[i]));
    }
}
