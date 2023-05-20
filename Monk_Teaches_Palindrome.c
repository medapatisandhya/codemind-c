

#include <stdio.h>
#include <string.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    for(m=1;m<=n;m++)
    {
    char s[150];
    int i,w=0,j;
    scanf("%s",s);
    int l=strlen(s);
    i=0;
    j=l-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            w++;
            break;
        }
        i++;
        j--;
    }
    if(w==0)
    {
       if(l%2==0)
       {
           printf("YES EVEN
");
       }
       else
       {
           printf("YES ODD
");
       }
    }
    else
    {
        printf("NO
");
    }
    }
    return 0;
}
