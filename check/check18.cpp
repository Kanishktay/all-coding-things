#include<bits/stdc++.h>
using namespace std;

int main()
{
    string h;
    cin>>h;
    int n;
    cin>>n;
    unordered_map<char,int> b;
    for(auto x:h)
    {
        b[x]++;
    }
    sort(h.begin(),h.end());
    // cout<<h<<endl;
    cout<<h[n-1]<<endl;
    cout<<b[h[n-1]];

}