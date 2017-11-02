#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
float s,area;
scanf("%d%d%d",&a,&b,&c);
if(a+b>c&&a+c>b&&b+c>a)
  { 
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("a=%d\tb=%d\tc=%d\n",a,b,c);
    printf("area=%f\n",area);
  }
else
  {
  printf("not trangle\n");
   }
return 0;
}
