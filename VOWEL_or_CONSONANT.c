#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='0'||ch=='U')
    {
        printf("VOWEL");
    }
    else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
}