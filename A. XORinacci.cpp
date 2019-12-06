#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c;
        d=a^b;
        if(c%3==0)
            cout<<a<<endl;
        else if(c%3==1)
            cout<<b<<endl;
        else
            cout<<d<<endl;
    }
    return 0;
}
