#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    vector<int> p;
	    int a,b,c;
	    cin>>a>>b>>c;
	    p.push_back(a);
	    p.push_back(b);
	    p.push_back(c);
	    sort(p.begin(),p.end());
	    if(p[2]==(p[0]+p[1]))
	    {
            cout<<p[0]<<" "<<p[1]<<" "<<p[2];
	        cout<<"YES";
	    }
	    else
	    {
	        cout<<"NO";
	    }
	    cout<<endl;
	}
	return 0;
}
