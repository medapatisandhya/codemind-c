#include <stdio.h>
int main(){
    int n,s=0,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        s+=arr[i];
    }
    printf("%d",s);
}
