#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b=0;
        cin>>a;
        if(a>2)
        {
            if(a%2==1)
            {
                cout<<"0"<<endl;
            }
            else{
                while(a%2==0)
                {
                    if(a==1)
                    {
                        cout<<"0"<<endl;
                    }
                    else if(a==2){
                        cout<<b+1<<endl;
                        break;
                    }
                    a=a/2;
                    b++;
                    if(a%2!=0)
                    {
                        cout<<"0"<<endl;
                        break;
                    }
                }
            }
        }
        else{
            cout<<"0"<<endl;
        }
    }
}
