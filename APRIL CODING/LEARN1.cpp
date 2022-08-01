#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string ans;
        int p,r,b;
        cin>>p>>r>>b;
        int d=b;
        if(b==1)
        {
            for(int i=0;i<r/2;i++)
            {
                ans.insert(0,"R",1);
            }
            ans.insert(ans.size(),"B",1);
            if(r%2==1)
            {
                r++;
            }
            for(int i=0;i<r/2;i++)
            {
                ans.insert(ans.size(),"R",1);
            }
            cout<<ans<<endl;
            continue;
        }
        int h=r/(b+1);
        for(int j=0;j<d;j++)
        {
            ans.insert(0,"B",1);
            b--;
            for(int k=0;k<h;k++)
            {
                ans.insert(0,"R",1);
                r--;
            }
        }
        for(int k=0;k<h;k++)
        {
            if(r>0)
            {
                ans.insert(ans.size(),"R",1);
                r--;
            }
        }
        // cout<<r<<" "<<ans<<endl;
        while(r)
        {
            ans.insert(ans.size(),"R",1);
            r--;
            if(r==0)
            {
                break;
            }
            ans.insert(0,"R",1);
            r--;
        }
        cout<<ans<<endl;
    }
}