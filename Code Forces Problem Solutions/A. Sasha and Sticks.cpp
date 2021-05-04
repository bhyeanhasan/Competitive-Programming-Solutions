#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll int a,b;
    cin>>a>>b;

    ll int x=a/b;

    //cout<<x<<endl;

    if(x%2==1 || x==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
