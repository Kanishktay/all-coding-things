#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        int h = a/2;
        if(a%2==1)
        {
            h++;
        }
        if(b>h)
        {
            cout<<"-1\n";
            continue;
        }
        b--;
        string p;
        for(int i=0;i<b;i++)
        {
            char y = 'a' + i;
            p+=y;
        }
        int k = a-b-b;
        for(int i=0;i<k;i++)
        {
            char y = 'a' + b;
            p+=y;
        }
        for(int i=0;i<b;i++)
        {
            char y= 'a' + b-1-i;
            p+=y;
        }
        cout<<p<<endl;
    }
}