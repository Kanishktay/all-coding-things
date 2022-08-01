#include<bits/stdc++.h>
using namespace std;

int high_mount(vector<int> arr)
{
    int n=arr.size();
    int larg= 0;
    for(int i=1;i<n-2;)
    {
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
        {
            int cnt=1;
            int j=i;
            while(j>=1 and arr[j]>arr[j-1])
            {
                j--;
                cnt++;
            }   
            while(i<=n-2 and arr[i]>arr[i+1])
            {
                i++;
                cnt++;
            }
            if(larg<cnt)
            {
                larg=cnt;
            }
        }
        else{
            i++;
        }
    }
    return larg;
}

int main()
{
    vector<int> a{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    //highest mountain is the one whose width is max
    int h=high_mount(a);
    cout<<h;
}