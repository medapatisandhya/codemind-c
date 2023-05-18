#include <stdio.h>
#include <string.h>
int main() 
{
    char s[100];
    scanf("%s",s);
    int h, m;
    sscanf(s, "%d:%d", &h, &m);
    char am_pm[3];
    if (h < 12)
    {
        sprintf(am_pm, "AM");
    } else 
    {
        sprintf(am_pm, "PM");
        h -= 12;
    }
    if(h == 0)
    {
        h = 12;
    }
    char t[20];
    sprintf(t, "%02d:%02d %s", h, m, am_pm);
    printf("%s
", t);

    return 0;
}