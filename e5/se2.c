#include <stdio.h>
#include <math.h>
void main()
{
 float x1,x2=1,a;
 scanf("%f",&a);
 for(x1=a/2;fabs(x1-x2)>=1e-15;){x1=x2;x2=0.5*(x1+a/x1);}
  printf("%f\n",x2);
}
