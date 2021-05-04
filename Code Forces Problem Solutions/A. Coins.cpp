#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,count=0;
    cin>>n>>t;

    while(t>0)
    {
        int x=t%n;
        int y=t/n;
        count+=y;
        t=x;
        n--;

    }
    cout<<count;
    return 0 ;
}
