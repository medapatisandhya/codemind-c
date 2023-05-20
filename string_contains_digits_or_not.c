#include <stdio.h>
#include <string.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
    char s[150];
    int i,w=0;
    scanf("%s",s);
    int l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            w++;
        }
    }
    if(w==0)
    {
    printf("No
");
    }
    else
    {
        printf("Yes
");
    }
    }
    return 0;
}