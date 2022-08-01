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
        string p,q;
        cin>>p>>q;
        vector<int> z(26,0);
        for(int i=0;i<a;i++)
        {
            if(p[i]!=q[i])
            {
                z[q[i]-'a']++;
            }
        }
        int ans=0;
        for(int i=0;i<26;i++)
        {
            if(z[i]>0)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}