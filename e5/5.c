#include<stdio.h>
int main()
{
 int val,m,sum=0; 
 scanf("%d",&val);
 m = val;
 while (m)
 {
  sum = sum*10 + m%10;
   m /= 10;
 }
  if (sum == val)
    printf("Yes!\n");
  else
    printf("No!\n");
 return 0;
}
