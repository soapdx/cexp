#include<stdio.h>
int main()
{
 	printf("%o\n", -4);
	printf("%x\n", -4);
	printf("%8.2f\n",1.0/3);
	printf("%8.2f\n",1.0/3);
	printf("%-8.2f\n",1.0/3);
	printf("%8.2f\n",(float)1/3);
	
	printf("%hd,%hu\n",23,23);
	printf("%ho,%hx\n",23,23);
	printf("%o,%x\n",23,23);

	printf("%hd,%hu\n",-23,-23);
	printf("%ho,%hx\n",-23,-23);
	printf("%o,%x\n",-23,-23);
   return 0;
}
