
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    int i,w=1,a,b;
    fgets(s,1000,stdin);
    scanf("%d%d",&a,&b);
    int l=strlen(s);
    for(i=a;i<=b;i++)
    {
        printf("%c",s[i]);
        
    }
    
    return 0;
}