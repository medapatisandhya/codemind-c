#include <stdio.h>
#include <string.h>
char vowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        return 1;
    }
    return 0;
}
void swap(char *a,char *b)
{
    char t=*a;
    *a=*b;
    *b=t;
}
void reverse(char *s)
{
    int l=strlen(s);
    int i=0,j=l-1;
    while(i<j)
    {
        if(!(vowel(s[i])))
        {
            i++;
            continue;
        }
        if(!(vowel(s[j])))
        {
            j--;
            continue;
        }
        swap(&s[i],&s[j]);
        i++;
        j--;
    }
}
int main()
{
    char s[100];
    scanf("%s",&s);
    reverse(s);
    printf("%s",s);
}
