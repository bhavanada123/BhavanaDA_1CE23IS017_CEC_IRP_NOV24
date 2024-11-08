#include<stdio.h>
int main(){
    int i=0,n=0,a[1000],esum=0,osum=0;
    scanf("%d",&n);
    for(i=0;i<n;scanf("%d",&a[i++]));

    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        esum+=a[i];
        else
        osum+=a[i];
    }
    printf("%d %d",esum,osum);
}