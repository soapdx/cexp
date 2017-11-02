#include<stdio.h>
int a[10];
int cg(int x,int y)
{int tmp;tmp=a[x];a[x]=a[y];a[y]=tmp;}
int main()
{
 int i,j,k,min=0;
 for(i=0;i<10;i++)scanf("%d",&a[i]);
 for(i=0;i<10;i++)printf("%d ",a[i]);
 printf("\n");
 for(i=0;i<9;i++)
  { min=i;
    for(j=i;j<10;j++)
      {
        if(a[min]>a[j])min=j;
      }
    if(min!=i)cg(min,i);
  }
 for(i=0;i<10;i++)printf("%d ",a[i]);
 printf("\n");
return 0;
}
