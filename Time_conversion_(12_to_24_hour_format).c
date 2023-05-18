
#include <stdio.h>
#include <string.h>
int main() 
{
    char s[100];
    fgets(s,100,stdin);
    char am_pm[3];
    int h, m;
    sscanf(s, "%d:%d %s", &h, &m,am_pm);
    if (strcmp(am_pm,"PM")==0 && h!=12)
    {
        h=h+12;
    } 
    if(strcmp(am_pm,"AM")==0 && h==12) 
    {
        h=0;
    }
    char t[20];
    sprintf(t, "%02d:%02d", h, m);
    printf("%s", t);

    return 0;
}
