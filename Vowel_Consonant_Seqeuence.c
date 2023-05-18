#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i;
    scanf("%s",s);
    int len=strlen(s);
    for( i=0;i<len;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            s[i]='V';
        }
        else
        {
            s[i]='C';
        }
    }
    char k=s[0];
    printf("%c",k);
    for(i=0;i<len;i++)
    {
    	if(k!=s[i])
    	{
    		k=s[i];
    		printf("%c",k);
		}
	}
}