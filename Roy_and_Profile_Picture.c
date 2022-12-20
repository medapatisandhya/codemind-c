#include <stdio.h>
int main()
{
    int n,l,w,h,i;
    scanf("%d%d",&l,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&w,&h);
        if(w<l || h<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if(w==h)
        {
            printf("ACCEPTED
");
        }
        else
        {
            printf("CROP IT
");
        }
     }
}