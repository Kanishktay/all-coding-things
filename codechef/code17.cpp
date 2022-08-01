#include <bits/stdc++.h>
using namespace std;
// Recursive function to return gcd of a and b
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int p,q;
        cin>>p>>q;
        if(p>q)
        {
            swap(p,q);
        }
        vector<int> a;
        for(int i=0;i<q-p;i++)
        {
            a.push_back(gcd(p+i,q+i));
        }
        sort(a.begin(),a.end());
        int ans =0;
        for(int i=0;i<a.size();i++)
        {
            if(i==a.size()-1)
            {
                ans++;
                continue;
            }
            if(a[i]==a[i+1])
            {
                i++;
            }
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}