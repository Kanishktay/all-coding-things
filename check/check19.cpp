#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        vector<int> a;
        vector<int> b;
        for(int i=0;i<n;i++)
        {
            int h;
            cin>>h;
            a.push_back(h);
        }
        for(int i=0;i<n-1;i++)
        {
            int h;
            cin>>h;
            b.push_back(h);
        }
        vector<int> p;
        for(int i =0;i<n;i++)
        {
            int h = c/a[i];
            if(c%a[i]!=0)
            {
                h++;
            }
            // cout<<h<<" ";
            p.push_back(h);
        }
        // cout<<endl;
        // for(auto x:p)
        // {
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        vector<int> q;
        int carry = 0 ;
        for(int i =0;i<n-1;i++)
        {
            int h = (b[i]-carry)/a[i];
            if((b[i]-carry)%a[i]!=0)
            {
                h++;
                carry = (a[i]-(b[i]-carry)%a[i]);
            }
            if(i>0)
            {
                h += q[i-1];
                h++;
            }
            q.push_back(h);
        }
        // for(auto x:q)
        // {
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        for(int i=0;i<n;i++)
        {
            if(i>0)
            {
                p[i]+=q[i-1];
                p[i]++;
            }
        }
        // for(auto x:p)
        // {
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        int ans = INT_MAX;
        for(int i=0;i<n;i++)
        {
            ans = min(ans,p[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}