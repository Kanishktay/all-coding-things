#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ac;
        cin>>ac;
        int p[26] = {0},r[26] = {0};
        string a;
        cin>>a;
        int len = a.length();
        char q[100001];
        q[ac]='\0';
        cout<<q;
        if(len%2!=0)
        {
            cout<<"NO";
        }
        else
        {
            for(int i=0;i<len;i++)
            {
                p[a[i]-'a']++;
            }
            int m=0;
            for(int i=0;i<26;i++)
            {
                // cout<<p[i]<<" ";
                if(p[i]>m)
                {
                    m=p[i];
                }
            }
            // cout<<endl;
            if(m>(len/2))
            {
                cout<<"NO";
            }
            else{
                cout<<"YES"<<endl;
                int h=0,l=0;
                for(int i=0;i<26;i++)
                {
                    if(p[i]>0)
                    {
                        while(p[i]--)
                        {
                            int v = i + 'a';
                            q[h] = v;
                            h++;
                            if(h==(len/2)&&l==0)
                            {
                                l=1;
                                r[i] = p[i];
                                p[i]=0;
                            }
                        }
                    }
                
                }for(int i=0;i<26;i++)
                {
                    if(r[i]>0)
                    {
                        while(r[i]--)
                        {
                            int v = i + 'a';
                            q[h] = v;
                            h++;
                        }
                    }
                }
                cout<<q;
            }
        }
        cout<<endl;
    }
}