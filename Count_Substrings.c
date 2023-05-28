#include <stdio.h>
int main()
{
    int j,l;
    scanf("%d" ,&l);
    for(j=1;j<=l;j++)
    {
        int c=0,n,i;
        char s[100];
        scanf("%d" ,&n);
        scanf("%s" ,s);
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            c++;
        }
        printf("%d
" ,c*(c+1)/2);
    }
}