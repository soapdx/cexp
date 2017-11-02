#include<stdio.h>
int main()
{
 char c[2048];
 int n=0,i;
 fgets(c,2048,stdin);
 for(i=0;c[i]!='\0';i++)if( (c[i]!=' '&&c[i-1]==' ') || (i==0&&c[0]!=' ') )n++;
 printf("There are %d words in this line.\n",n);
return 0;
}
