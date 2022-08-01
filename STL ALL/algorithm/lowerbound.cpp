#include<iostream>
#include<algorithm>
// #include<bits/stdc++.h>
using namespace std;

int main()
{
    // NEEDED A SORTED ARRAY FOR BINARY SEARCH ALWAYS REMEMBER  
    int arr[] = {20,30,40,50,100,110,40};
    int n = sizeof(arr)/sizeof(int);
    // cout<<n;
    int key;
    cin>>key;
    // cout<<key<<endl;
    bool present = binary_search(arr,arr+n,key);
    // cout<<present<<endl;
    if(present)
    {
        cout<<"available";
    }
    else
    cout<<" not Available";

    auto it = lower_bound(arr,arr+n,40);
    cout<<endl<<it-arr<<endl; 
}