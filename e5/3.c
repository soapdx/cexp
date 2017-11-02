#include<stdio.h>
int main()
{
 int i,j,num=1,total;
for(j=1;j<=10;j++){
 for(i=1;i<=j;i++)num*=i;
  total+=num;}
 printf("%d\n",total);
 return 0;
}
