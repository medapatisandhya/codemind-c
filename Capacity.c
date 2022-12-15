#include<stdio.h>
int main()
{
    int C,S,T,B,kb;
    scanf("%d%d%d",&S,&T,&B);
    C=(2*T*S*B*512)/1024;
    printf("%d KB",C);
}
