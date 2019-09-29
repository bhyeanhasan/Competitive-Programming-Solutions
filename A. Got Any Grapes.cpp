#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,a,b,c,m,n,s,p,val=0;
    cin>>x>>y>>z>>a>>b>>c;
    a=a-x;
        if(a<0)
        val=1;
    b=b+a-y;
        if(b<0)
        val=1;
    c=c+b-z;
        if(c<0)
        val=1;
    if(val==1)
        cout<<"NO"<<endl;
    else if(val==0)
    {
        cout<<"YES"<<endl;
    }

}
