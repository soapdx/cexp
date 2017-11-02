#include<stdio.h>
#include<math.h>
int a,b,c,d;
float f(float x)
 {return a*x*x*x+b*x*x+c*x+d;}
float f1(float x)
 {return 3*a*x*x+2*b*x+c;}
int main()
{
  float x0=1.0,x1;
  //scanf("%d,%d,%d,%d",&a,&b,&c,&d);
  a=3;b=-2;c=-5;d=7;
  x1=4;
  do
   {
    x0=x1;
    x1=x0-f(x0)/f1(x0);
    }
while(fabs(x1-x0) >=0.00001);
   printf("%f\n",x1);
return 0;
}
