#include<stdio.h>
#include<string.h>

int main()
{
    
    char s[5] ="this";
    char p[5] ="this";
    char q[10] ="those";
    char r[5]="This";
    int a= strcmp(s,p);
    int b= strcmp(s,r);
    int c= strcmpi(s,r);
    if(a==0)
    {
        printf("\nThese both are same");
    }
    else{
        printf("\nBoth are different.");
    }
    if(b==0)
    {
        printf("\nThese both are same");
    }
    else{
        printf("\nBoth are different.");
    }
    if(c==0)
    {
        printf("\nThese both are same");
    }
    else{
        printf("\nBoth are different.");
    }
    return 0;
}