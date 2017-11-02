#include<stdio.h>
int main()
{
       int i,n,sum;
       printf("factors of 1 is: 1 \n");
       for(n=1;n<=1000;n++)
       {
              sum=0;
              for(i=1;i<=n-1;i++)
              {if(n%i==0)sum+=i;}
              if(sum==n)
                {
              printf("factors of %d is: ",n);
                 for(i=1;i<=n-1;i++)
              {if(n%i==0)printf(" %d ",i);}
             printf("\n");
                }
       }
       return 0;
}
