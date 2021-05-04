#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,x,y,z,n,s=0;
    double j,h;
    cin>>a>>b>>c>>x>>y>>z>>n;

    j=ceil((a+b+c)*1.00/5);
    if(j>0)
        s++;

    h=ceil((x+y+z)*1.00/10);

    if(h>0)
        s++;



    if((j+h)<=n && s<=n)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;


}
