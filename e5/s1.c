#include<stdio.h>
int main()
{
int a[5],i,j,temp;
for(i=0;i<4;i++)scanf("%d",&a[i]);
 
for(j=0;j<3;j++)
  for(i=j+1;i<4;i++)
   if(a[j]<a[i]){temp=a[j];a[j]=a[i];a[i]=temp;}

for(i=2;i<4;i++)
   if(a[1]<a[i]){temp=a[1];a[1]=a[i];a[i]=temp;}

for(i=3;i<4;i++)
   if(a[2]<a[i]){temp=a[2];a[2]=a[i];a[i]=temp;}

for(i=0;i<4;i++)printf("%d ",a[i]);
printf("\n");
return 0;
}
