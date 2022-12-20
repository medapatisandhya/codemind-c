#include <stdio.h>
int main()
{
    int h,s,sp;
    scanf("%d",&h);
    if(h%400==0)
    {
        printf("True");
    }    
    else
    {
       if(h%100==0)
       {
          printf("False");
       }
       else if(h%4==0)
       {
          printf("True");
       }
       else
       {
          printf("False");
       }
    }
}