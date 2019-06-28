//print the max sub array
#include <stdio.h>

int main() 
{
int n,s=0,sum=0,max=0,c1=0,c2=0;
int a[100];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
   scanf("%d",&a[i]);
}

for(int i=0;i<n;i++)
{
   if(a[i]<0)
   {
       if(max<sum)
       {
           max=sum;
           c2=i;
           c1=s;
       }
       s=i+1;
       sum=0;
   }
   else
   {
       sum+=a[i];
   }
}
if(max<sum)
{
   c2=n;
   c1=s;
}
for(c1;c1<c2;c1++)
{
   printf("%d ",a[c1]);
}
return 0;
}
