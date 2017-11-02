#include<stdio.h>
int main()
{
  char c,d;
  while((c=getchar())!='\n')
  {

  c=((c+5<'z')||(c+5<'Z'))?c+5:c+5-26;
  printf("%c",c);
 
  }
printf("\n");
  return 0;
}

