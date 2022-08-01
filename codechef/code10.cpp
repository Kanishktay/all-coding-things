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
        int p[26] = {0};
        string a;
        cin>>a;
        char q[10001];
        q[ac]='\0';
        if(a.length()%2!=0)
        {
            cout<<"NO";
        }
        else
        {
            for(int i=0;i<a.length();i++)
            {
                p[a[i]-'a']++;
            }
            int m=0;
            for(int i=0;i<26;i++)
            {
                if(p[i]>m)
                {
                    m=p[i];
                }
            }
            if(m>(a.length()/2))
            {
                cout<<"NO";
            }
            else{
                cout<<"YES"<<endl;
                int h=0;
                int x=a.length()-1;
                int l=0;
                cout<<"YES";
                for(int i=0;i<26;i++)
                {
                    if(p[i]>0)
                    {
                        while(p[i]--)
                        {
                            int v = i + 'a';
                            q[h] = v;
                            h++;
                            if((h==(a.length()/2))&&(l==0)&&(p[i]>0))
                            {
                                l=1;
                                while(p[i]--)
                                {
                                    int v = i -'a';
                                    q[x] = v;
                                    x--;
                                }
                            }
                        }
                    }
                    cout<<"YES";
                }
                cout<<q;
            }
        }
        cout<<endl;
    }
}