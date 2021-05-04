#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,c,x,y,z,l;

        cin>>a>>b>>c;

    x=a+b+c;
    y=(a+c)*2;
    z=(b+c)*2;
    l=(a+b)*2;
    int ans=min(x,min(y,min(z,l)));


        cout<<ans<<endl;



}
