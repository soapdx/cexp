#include<stdio.h>

void sort(int a,int b,int c)
{

 int t;
 if(a>b){t=a;a=b;b=t;}
 if(b>c){t=c;c=b;b=t;}
 if(a>c){t=c;c=a;a=t;}
 printf("%d%d%d\n",a,b,c);

}

int main()
{

int q,w,e;

scanf("Enter three integers:\n %d %d %d",&q,&w,&e);
sort(q,w,e);
printf("%d,%d,%d\n",q,w,e);

return 0;
}
