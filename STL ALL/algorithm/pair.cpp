#include<iostream>
using namespace std;

int main()
{

    pair<int,char> p;
    p.first =10;
    // p.second =20;
    p.second = 'B';
    cout<<p.first<< " "<<p.second<<endl;
    pair<int,int> q;
    q=p;
    cout<<q.first<< " "<<q.second<<endl;
    pair<int,string> r =make_pair(100,"CARS are");
    cout<<r.first<<" "<<r.second<<endl;
    pair<pair<int,int>,int> t = make_pair(make_pair(100,200),300);
    cout<<t.first.first<<" "<<t.first.second<<" "<<t.second<<endl;
}