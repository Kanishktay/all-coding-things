#include<iostream>
using namespace std;

bool compare(int a,int b)
{
    return a>b;
}
void bubblesort(int a[],int n, bool (&cmp)(int a,int b))
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(cmp(a[j],a[j+1]))
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main()
{

    int a[]={3,5,8,9,1,4,6,5,7,2,3};
    int n=sizeof(a)/sizeof(int);
    bubblesort(a,n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}