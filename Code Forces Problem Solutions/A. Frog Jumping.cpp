#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {


    ll int a,b,n,c,s=0,l;
    cin>>a>>b>>n;
    l=n/2;

    if(n%2==0)
    {
        s=(a*l)-(b*l);
    }
    else
    {
        s=(a*(l+1)-(b*l));
    }
    cout<<s<<endl;
    s=0;
    }
}
