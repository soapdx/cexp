#include<stdio.h>
int main()
{
    char c,d;
    scanf("%c",&c);
    if(c>='a' && c<='z')
        d=c+('A'-'a');
    if(c>='A' && c<='Z')
        d=c-('A'-'a');
    printf("%c\n",d);
    return 0;
}
