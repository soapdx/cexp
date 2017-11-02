#include<stdio.h>
double f(double x)
{return 2*x*x*x-4*x*x+3*x-6;}
int main()
{
  double a=-10,b=10,limit=0.00001;
  if(f(a)*f(b)>0)
    printf("无法用二分法求解\n"); 
  else
    {
    while((b-a)>limit)
     {
       if(f((a+b)/2)*f(b)<0) 
          a=(a+b)/2;
       else
          b=(a+b)/2;
}
printf("%.5f\n%.5f\n",a,b);
}
return 0;
}
