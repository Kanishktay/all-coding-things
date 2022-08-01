#include<stdio.h>

void table(int &num)
{
        int count;
        for (count=1;count<=10;count++)
        {
            printf("%d x %d=%d\n",num,count,num*count);
        }
}
int main()
{
    int num;
    printf("enter positive number\n");
    scanf("%d",&num);

    printf("\n multiplication table for %d is:\n",num);

    table(num);
    return 0;
}