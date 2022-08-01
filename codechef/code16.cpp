#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        if(a%2==1)
        {
            int p=a/2+1;
            int q=a/2+1;
            cout<<p;
            while(p<a)
            {
                q--;
                p++;
                cout<<" "<<q<<" "<<p;
            }            
        }
        else
        {
            int p=a/2+1;
            int q=a/2;
            cout<<q<<" "<<p;
            while(p<a)
            {
                q--;
                p++;
                cout<<" "<<q<<" "<<p;
            }            
        }
    }
    return 0;
}