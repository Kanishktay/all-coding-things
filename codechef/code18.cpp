#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long int a,b;
        cin>>a>>b;
        if(a>b)
        {
            swap(a,b);
        }
        if(a==b)
        {
            cout<<a<<endl;
            continue;
        }
        long long int ans = 0;
        while(a <= b)
        {
            a = a * 2;
            ans++;
        }
        ans--;
        a = a / 2;
        ans = ans + a - (b - a);
        b = (b - a) * 2;
        a= b / 2;
        if(a==b)
        {
            ans = ans + a;
            cout<<ans<<endl;
            continue;
        }
        ans++;
        ans = ans + b;
        cout<<ans<<endl;
    }
    return 0;
}