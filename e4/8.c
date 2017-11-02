#include <stdio.h>
int main()
{
    long int a, b, c, d, e, x;
    scanf("%ld", &x);
    a=x/10000;
    b=x%10000/1000;
    c=x%1000/100;
    d=x%100/10;
    e=x%10;
    if(a != 0)
        printf("5,%ld %ld %ld %ld %ld\n %ld %ld %ld %ld %ld\n",a,b,c,d,e,e,d,c,b,a);
    else if(b != 0)
        printf("4,%ld %ld %ld %ld\n %ld %ld %ld %ld\n",b,c,d,e,e,d,c,b);
    else if(c != 0)
        printf("3,%ld %ld %ld\n %ld %ld %ld\n",c,d,e,e,d,c);
    else if(d != 0)
        printf("2,%ld %ld\n  %ld %ld\n",d,e,e,d);
    else if(e != 0)
        printf("1,%ld\n %ld\n",e,e);
}
