#include<bits/stdc++.h>
using namespace std;

int diff(int n)
{
    string k = to_string(n);
    reverse(k.begin(),k.end());
    int j = stoi(k);
    int diff = abs(n-j);
    return diff;
}
int main()
{
    int n;
    cin>>n;
    int differ = diff(n);
    cout<<differ;
    return 0;
}