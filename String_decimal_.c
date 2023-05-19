#include <stdio.h>
#include <string.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        char s[100];
        scanf("%s",s);
        int j,l,c=0;
        l=strlen(s);
        for(j=0;j<l;j++)
        {
            if(s[j]>='0' && s[j]<='9')
            {
                c++;
            }
        }
       if(c==l)
       {
           printf("True
");
       }
       else
       {
           printf("False
");
       }
        
        
    }
}