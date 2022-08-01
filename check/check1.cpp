#include<iostream>
using namespace std;
int main()
{
    int vote;
    printf("enter the age : ");
    scanf("%d", &vote);
    vote>=18 ? printf("yes") : printf("no");
}