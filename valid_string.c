#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int i,c=0,l,j;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            if(s[i]==s[j] && i!=j)
            {
                c++;
            }
        }
    }
   if((l-c)==1 || (l-c)==0)
   {
       printf("Valid String");
   }
   else
   {
       printf("Not Valid");
   }
}