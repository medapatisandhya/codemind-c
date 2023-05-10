#include <stdio.h>
int main()
{
    int n,a,s,i;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d",&a);
        int v[a];
        s=0;
        for(i=1;i<a;i++)
        {
            scanf("%d",&v[i]);
            s+=v[i];
        }
        printf("%d
",(a*(a+1)/2)-s);
        n--;
    }
    
}
