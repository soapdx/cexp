#include<stdio.h>
int main()
{
 int i,j,k,n;
 printf("The daffodil numbers are:\n");
 for(i=1;i<5;i++)
  for(j=0;j<10;j++)
   for(k=0;k<10;k++)
   {
    n=i*100+j*10+k;
    if((i*100+j*10+k)==((i*i*i)+(j*j*j)+(k*k*k)))
     printf(" %d",n);
   }
     printf("\n");
 return 0;
}
