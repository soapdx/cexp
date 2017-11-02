#include<stdio.h>
int absolute(int num)
{
 if(num>0){return num;}else{return -num;}
}
int main()
{
 int a;
 scanf("%d",&a);
 printf("%d\n",absolute(a));
 return 0;
}
