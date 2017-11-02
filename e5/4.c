#include<stdio.h>
int main()
{
 long int n,t=10,i=1,sum=0;
 scanf("%ld",&n);
   for(;;){
        if(n/t==0) break;
        sum+=(n/(t/10)%10);
        t*=10;
        i++; 
         }
    sum+=(n/(t/10)%10);
    printf("%ld %ld\n",sum,i);
    return 0;
}

