#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,int> a;
    int n;
    cin>>n;
    vector<int> p;
    for(int i=0;i<n;i++)
    {
        int h;
        cin>>h;
        if(a[h]==0)
        {
            p.push_back(h);
            a[h]=1;
        }
    }
    cout<<p.size()<<endl;
    for(auto x:p)
    {
        cout<<x<<" ";
    }
}