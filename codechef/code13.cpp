#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int mingcd(int p[] , int n)
    {
        // Your code goes here  
        int a=0,b=0,c=INT_MAX,d=INT_MAX;
        for(int i=0;i<n;i++)
        {
            // cout<<p[i]<<endl;
            if((p[i]<p[i+1])&&(i!=n-1))
            {
                b=i+1;
            }
            else
            {
                cout<<a<<" "<<b<<endl;
                if(p[a]==1)
                {
                    c=1;
                }
                else
                {
                    int y = p[a];
                    int h=b-a+1;
                    
                    int t=0;
                    for(int j=a;j<=b;j++)
                    {
                        if(p[j]%y==0)
                        {
                            t++;
                        }
                    }
                    if(t==h)
                    {
                        c=y;
                    }
                    else{
                        y=y/2;
                        while(t!=y)
                        {
                            cout<<y<<endl;
                            t=0;
                            for(int j=a;j<=b;j++)
                            {
                                if(p[j]%y==0)
                                {
                                    t++;
                                }
                            }
                            y--;
                        }
                        c=y;
                        c++;
                    }
                }
                cout<<c<<endl;
                a=i+1;
                b=i+1;
            }
            if(d>c)
            {
                d=c;
            }
        }
        return d;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        Solution o;
        cout<<o.mingcd(a,n)<<endl;
    }
}
