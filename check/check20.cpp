#include<bits/stdc++.h>
using namespace std;

vector<bool> solve(int m,int w,vector<int> p)
{
    vector<bool> ans;
    queue<int> q;
    for(int i=0;i<p.size();i++)
    {
        if(!q.empty())
        {
            while((q.front()+w)<p[i])
            {
                q.pop();
            }
        }
        if(q.size()==m)
        {
            ans.push_back(false);
        }
        else{
            ans.push_back(true);
            q.push(p[i]);
        }
        while(q.front()+w==p[i])
        {
            q.pop();
        }
    } 
    return ans;
}


int main()
{
    int m =3;
    int w =5;
    vector<int> p = {1,2,2,2,6,12,32,33,34,37};
    vector<bool> ans = solve(m,w,p);
    // cout<<ans.size()<<endl;
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}