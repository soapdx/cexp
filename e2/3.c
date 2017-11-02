#include<stdio.h>
int main()
{
   int i=14,j=6;
	
	j=++i;
	printf("%d,%d\n",i,j);
	j=i++;
	printf("%d,%d\n",i,j);
	j=4+i++;
	printf("%d,%d\n",i,j);
	j=5+(++i);
	printf("%d,%d\n",i,j);

	printf("%d,%d\n",18/4,18%4);
  return 0;
}
