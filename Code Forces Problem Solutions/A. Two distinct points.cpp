/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    ll a,b,c,d,n,t,count=0,sum=0,s=0,result;

    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a!=d)
            cout<<a<<" "<<d<<endl;
        else if(a!=c)
            cout<<a<<" "<<c<<endl;
        else if(b!=c)
            cout<<b<<" "<<c<<endl;
        else if(b!=d)
            cout<<b<<" "<<d<<endl;

    }
    return 0;
}
