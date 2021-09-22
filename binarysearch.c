#include<stdio.h>
int main()
{
    int a[100],b,i,j,n,l,r,mid;
    //array formation
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number you want to search");
    scanf("%d",&b);
    
    //mid = n/2;
    l=0;
    r=n;

    while(l<=r)
    {
        mid = (l+r)/2;
        if(a[mid]==b)
        {
            printf("found at %d",mid);
        }
        if(a[mid]<b)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return 0;

}