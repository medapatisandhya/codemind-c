#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i,c,x=0;
    scanf("%d",&c);
    for(i=1;i<=c;i++)
    {
        scanf("%s",s);
        if(strcmp(s,"++X")==0 || strcmp(s,"X++")==0)
        {
            x=x+1;
        }
        else
        {
            x=x-1;
        }
    }
    printf("%d
",x);
}