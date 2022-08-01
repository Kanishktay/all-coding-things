#include<iostream>
using namespace std;
void func( int a[] ,int n=10)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
int main()
{
    int a[10] ={0};
    func(a);
    return 0;
}