#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a[] = {10,20,30,40,50,60};
    int n= sizeof(a)/sizeof(int);

    rotate(a,a+1,a+3);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}