#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if((b-a)%3==0 || (b-a)%3==1)
        {
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
        cout<<endl;
    }
    return 0;
}