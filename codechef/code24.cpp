#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(a<=b)
        {
            cout<<"0\n";
        }
        else{
            int ans = 0;
            b = a-b;
            if(b%4==0)
            {
                ans = b/4;
            }
            else{
                ans = b/4 + 1;
            }
            cout<<ans<<endl;
        }
    }
}