#include <stdio.h>

int main()
{
freopen("input.txt","r", stdin);
freopen("output.txt", "w", stdout);
 int i,j=0,n,index=0,x=0;
 int a[200];
 scanf("%d",&n);
 int r=n-1;
 int temp=0;
 int m=1;
 for (i = 0; i<n; i++)
 { 
  if(r!=0)
  {
     while(n)
     {
         a[index]=n%10;
         index++;
         n=n/10;
         m++;
     }
     m--;
    for (index = 0; index <= m; index++)
    {
    x= a[index]*r+temp;
    a[index]=x%10;
    temp=x/10;
    }
    
    
    while(temp)
    {   
        a[index]=temp%10;
        temp=temp/10;
        index++;
    }
 }
 else
  {
      break;
  }
   r=r-1;
 }
   index=0;
   for(int i=0;i<m;i++)
   {
       printf("%d",a[i]);
   }
 
  
return 0;
}