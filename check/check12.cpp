#include <stdio.h>
void concatstring(char * p ,char * q)
{
    while(*p)
    {
        p++;
    }
    while(*q)
    {
        *p = *q;
        q++;
        p++;
    }
    *p = '\0';
}
int main()
{
    char a[100], b[100];

    printf("\nEnter the first string : ");
    gets(a); 
    printf("\nEnter the second string : ");
    gets(b); 
    char *p = a;
    char *q = b;
    concatstring(p,q);
    printf("\nstring after concatenation is: %s ", a);
    return 0;
}