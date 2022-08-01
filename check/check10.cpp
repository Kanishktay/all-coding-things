#include<stdio.h>
#include<string.h>
int length(char l[])
{
    int y=strlen(l);
    return y;
}
int main()
{
    char s[30];
    gets(s);
    int a= length(s);
    printf(" \nlength is : %d",a);
    return 0;
}