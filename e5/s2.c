#include<stdio.h>
int main()
{
 int a[12],i,j,max=11,min=12,sum=0;
 a[max]=0;a[min]=101;
 for(i=0;i<10;i++)scanf("%d",&a[i]);
 for(i=0;i<10;i++){if(a[i]<a[min])min=i;if(a[i]>a[max])max=i;}
 for(i=0;i<10;i++){if(max!=i&&min!=i)sum+=a[i];}
 printf("max=%d, No.%d \nmin=%d, No.%d\n",a[max],max,a[min],min);
 printf("sum=%d\n",sum+a[max]+a[min]);
 printf("average=%f\n",(float)sum/8);





return 0;
}
