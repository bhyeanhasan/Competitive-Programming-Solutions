#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll int a,b,c,d;
        cin>>a>>b>>c>>d;

        ll int n=a/d;
        ll int get=n/b;
        n=n+(get*c);
        cout<<n<<endl;
        n=0;
    }
    return 0;
}
