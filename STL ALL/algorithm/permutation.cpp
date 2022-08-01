#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v{10,20,30,40,50,60};
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    next_permutation(v.begin(),v.end());    
    next_permutation(v.begin(),v.end());    
    next_permutation(v.begin(),v.end());    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}