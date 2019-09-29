#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll int t,n,c=0;
    cin>>t>>n;

    while(t--)
    {
        char s;
        ll int x;
        cin>>s>>x;
        if(s=='+')
        {
            n+=x;
        }
        else if(s=='-'){
                if(n>=x)
                    n-=x;
                else
                    c++;

        }

    }
    cout<<n<<" "<<c<<endl;
}
