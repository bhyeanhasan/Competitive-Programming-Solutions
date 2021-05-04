#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,count=0;
    cin>>n;
    int l=n/2;
    cout<<l<<endl;
    if(n%2==0)
    {

        for(int i=1;i<=n;i+=2)
        {
            if(i==n){
                cout<<2<<endl;
                break;
            }
            cout<<2<<" ";
        }
    }
     else{

     for(int i=1;i<=n;i+=2)
        {
            if(i==n-2){
                cout<<3<<endl;
                break;
            }
            cout<<2<<" ";
        }
     }
}
