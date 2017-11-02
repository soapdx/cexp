#include<stdio.h>
int main()
{
   int m, n, a, b, t, c;
   printf("Enter two numbers: ");
   scanf("%d%d", &a, &b);
   m=a;   n=b;
   while(b!=0)
   { c=a%b; a=b;  b=c;}
   printf("The greatest common divistor is: %d\n", a);
   return 0;
}
