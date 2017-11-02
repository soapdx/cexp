#include<stdio.h>
int main()
{
    char s1[100];
    char s2[100];
    fgets(s2,100,stdin);
    int i = 0;
    while ((s1[i] = s2[i]) != '\0')
        ++i;
    printf("The source is:\n%s", s2);
    printf("The destination is:\n%s", s1);
return 0;
}
