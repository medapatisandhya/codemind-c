#include<stdio.h>
#include<math.h>
int gcd(int a,int b)
{
  if(b==0)
  {
      return abs(a);
  }
  else
  {
      return gcd(b,a%b);
  }
}
int main()
{
    int n,a,b,k,i,r,lcm,gcf,c,x;
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        scanf("%d %d %d %d",&n,&a,&b,&k);
        c=gcd(a,b);
        lcm=(a*b)/c;
        x=(n/a)+(n/b)-(2*n/lcm);
        if(x>=k)
        {
            printf("Win
");
        }
        else
        {
            printf("Lose
");
        }
    }
}