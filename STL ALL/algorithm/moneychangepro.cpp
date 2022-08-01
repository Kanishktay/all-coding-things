#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int coins[] = {1,2,5,10,20,50,100,200,500,2000};
    int n =sizeof(coins)/sizeof(int);
    int money;
    cin>>money;
    while(money!=0)
    {
        auto it = lower_bound(coins,coins+n,money);
        cout<<coins[it-coins-1]<<" ";
        money = money - coins[it-coins-1];
    }
    return 0;
}