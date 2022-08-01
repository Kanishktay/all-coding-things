#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {1,5,9,3,6,8,0,2,7};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    auto i = find(arr,arr+n,key);
    int index = i - arr+1;
    if(index>n)
    {
        cout<<"not available";
    }
    else
    cout<<index;
}