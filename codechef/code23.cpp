#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c<100)
        {
            cout<<"FAIL\n";
        }
        else if(a<10)
        {
            cout<<"FAIL\n";
        }
        else if(b<10)
        {
            cout<<"FAIL\n";
        }
        else if(c<10)
        {
            cout<<"FAIL\n";
        }
        else{
            cout<<"PASS\n";
        }
    }
}