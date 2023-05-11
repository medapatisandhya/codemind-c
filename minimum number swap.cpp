#include<stdio.h>
int getminidx(int *a,int i,int n)
{
    int min=a[i],idx=i,j;
    for(j=i+1;j<n;j++)
    {
        if(min>a[j])
        {
            min=a[j];
            idx=j;
        }
    }
    return idx;
    
}
int sorted(int *a,int n)
{
    int k,r[2004],j,t,v[2004];
    for(k=0;k<n;k++)
    {
        r[k]=a[k];
        v[k]=a[k];
    }
    for(j=0;j<n-1;j++)
    {
        for(k=0;k<n-1;k++)
        {
            if(v[k]>v[k+1])
            {
                t=v[k+1];
                v[k+1]=v[k];
                v[k]=t;
            }
        } 
 }
 for(j=0;j<n;j++)
 {
     if(a[j]!=v[j])
     {
         return 0;
    }
}
return 1;
    
}
int main()
{
    int n,vk=0,i,a[2004],t,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        } 
        for(i=0;i<n;i++)
        {
            t=a[i];
            j=getminidx(a,i,n);
            if(a[i]==a[j])
            {
                continue;
            }
            if(j>i)
            {
                a[i]=a[j];
                a[j]=t;
                vk+=1;
            }
            if(sorted(a,n))
            {
                break;
            }
        }
    printf("%d",vk);}
