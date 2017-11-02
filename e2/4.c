#include<stdio.h>
int main()
{
 double a,b,c;
 scanf("%lf%lf",&a,&b);
 printf("%lf %lf\n",a,b);
 c=a;
 a=b;
 b=c;
 printf("%lf %lf\n",a,b);
 return 0;
}
