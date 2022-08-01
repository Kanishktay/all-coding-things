#include <bits/stdc++.h>
using namespace std;
int countDivisors(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // If divisors are equal,
            // count only one
            if (n / i == i)
                cnt++;
 
            else // Otherwise count both
                cnt = cnt + 2;
        }
    }
    return cnt;
}
 
int main()
{
    int n=0;
    cin>>n;
    while(n--)
    {
        int a;
        cin>>a;
        int ans =  countDivisors(a);
        ans--;
        if(a%2==0)
        {
            ans--;
        }
        ans*=2;
        if(a%2==0)
        ans++;
        cout<<ans<<endl;
        
    }
    return 0;
}