#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int g=0;
        vector<pair<char,int>> a;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='('||s[i]!=')')
            {
                a.push_back(make_pair(s[i],1));
            }
            else if(s[i]=='(')
            {
                a.push_back(make_pair(s[i],0));
                g++;
            }
            else if(s[i]==')')
            {
                if(g>0)
                {
                    a.push_back(make_pair(s[i],1));
                    g--;
                    int j=i;
                    while(s[j]!='(')
                    {
                        j--;
                    }
                    a[j].second=1;
                }
            }
        }
        string ans ="";
        for(int i=0;i<a.size();i++)
        {
            if(a[i].second==1)
            {
                ans = ans + a[i];
            }
        }
        return ans;
    }
};