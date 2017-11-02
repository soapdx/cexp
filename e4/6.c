#include<stdio.h>
int main()
{
 int a;
 char c;
 scanf("%d",&a);
 if(a>=90)c='A';
 if(a>=80&&a<=89)c='B';
 if(a>=70&&a<=79)c='C';
 if(a>=60&&a<=69)c='D';
 if(a<60)c='E';
 printf("%c\n",c);

}
