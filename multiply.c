#include<stdio.h>

int main()
{
freopen("input.txt","r", stdin);
freopen("output.txt", "w", stdout);
   
    int n,r,index=0,x,temp=0;
    scanf("%d %d",&n,&r);
    
    int a[200];
    
   while(n!=0)
     {
         a[index]=n%10;
         index++;
         n=n/10;
        
     }

     int j=0;
    
    for(int i=0;i<index;i++)
    {
    x= r*a[j]+temp;
    a[j]=x%10;
    j++;
    temp=x/10;
    }
    
    /*for(int k=0;k<j;k++){
        printf("%d",a[k]);
    }*/
    
    while(temp!=0) 
    {
        a[j]=temp%10;
        temp=temp/10;
        j++; 
    }
    j--;
    for (int y = 0; y <j; y++)
    {
      printf("%d",a[j]); 
    }

return 0;
}