#include <stdio.h>
#include <string.h>
int main()
{
    char s[2000],a;
    int i,c=0,l;
    fgets(s,2000,stdin);
    scanf("%c",&a);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]==a)
        {
            c++;
        }
    }
   if(c!=0)
   {
       printf("%d",c);
   }
   else
   {
       printf("-1");
   }
    return 0;
}