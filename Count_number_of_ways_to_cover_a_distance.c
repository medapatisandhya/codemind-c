#include <stdio.h>
int cls(int k)
{
    if(k<0)
    {
        return 0;
    }
    if(k==0)
    {
        return 1;
    }
    return cls(k-1)+cls(k-2)+cls(k-3);
    
}
int main()
{
    int r,p;
    scanf("%d" ,&r);
    p=cls(r);
    printf("%d" ,p);
}