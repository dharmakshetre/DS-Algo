#include<stdio.h>

int main()
{
    int i,a[10],n,b[10],p,temp;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    p = n-1;

    while(p!=0)
    {
    for(i=0;i<=p;i++)
    {
      if(a[i]>a[i+1])
      {
          temp = a[i];
          a[i] = a[i+1];
          a[i+1] = temp;
      }
       
    }
    p = p-1; 
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}