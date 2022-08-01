#include<stdio.h>
int main()
{
    int roll,marks,phone;
    char name[20];

    printf("enter your name:");
    gets(name);

    printf("enter roll number:");
    scanf("%d",&roll);

    printf("enter marks:");
    scanf("%d",&marks);

    printf("enter phone number:");
    scanf("%d",&phone);

    printf("details:");
    printf("\nname:%s",name);
    printf("\nroll nuber:%d",roll);
    printf("\nmarks:%d",marks);
    printf("\nphone number:%d",phone);
}