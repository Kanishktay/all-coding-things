#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> triplets(vector<int> arr,int sum)
{
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    int n=arr.size();
    for(int i=0;i<n-3;i++)
    {
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            int cur =arr[i];
            cur +=arr[j];
            cur +=arr[k];
            if(cur>sum)
            {
                k--;
            }
            else if(cur<sum)
            {
                j++;
            }
            else{
                ans.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    int s =40;
    auto result = triplets(arr,s);
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i][0]<<" "<<result[i][1]<<" "<<result[i][2]<<"\t\t";
    }
    return 0;
}