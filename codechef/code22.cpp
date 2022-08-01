#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b)
        {
            cout<<"0\n";
            continue;
        }
        int g = a^b;
        if(g>c)
        {
            cout<<"-1\n";
            continue;
        }
        else{
            cout<<"1\n";
            continue;
        }
        
    }
    return 0;
}