#include<stdio.h>
int main()
{
    int n,l[100],c=0,f=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        c+=1;
        scanf("%d",&l[i]);
    }
    for(int j=0;j<=n;j++)
    {
    if(l[j]>=n)
    {
        f=0;
        break;
    }
}
if(f==1)
printf("YES");
else
printf("NO");
}