#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int x=0,m,t;

    while(n--)
    {
        cin>>m>>t;
        if(m+t>x)
            x=m+t;

    }

    cout<<x<<endl;
    return 0;
}
