#include<stdio.h>

int main()
{
    int i,a[10],n,b[10],p,temp,j;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    p = n-1;

    for(j=1;j<=p;j++)
    {
    for(i=0;i<=p-j;i++)
    {
      if(a[i]>a[i+1])
      {
          temp = a[i];
          a[i] = a[i+1];
          a[i+1] = temp;
      }
      
    }
     
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
