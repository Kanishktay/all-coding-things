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
        string h = "0";
        for(int i=0;i<a-2;i++)
        {
            h+='1';
        }
        h+='0';
        cout<<h<<endl;
    }
    return 0;
}