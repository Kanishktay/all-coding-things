#include<stdio.h>
#include<string.h>

int main()
{
    char str1[12]="hello";
    char str2[12]="world";
    char str3[12];
    int len;

    // copy str1 to str3

    strcpy(str3,str1);
    printf("strcpy(str3,str1): %s\n",str3);

    // concat str1 and str2
    strcat(str1,str2);
    printf("strcat(str1,str2): %s\n",str1);

    // total length
    len=strlen(str1);
    printf("strlen(str1): %s\n",str1);
    return 0;
}