#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y;
    cin>>n;

    for(int i=9;i>=1;i--)
    {
        if(n%i==0)
        {
            x=n/i;
            y=i;
            break;
        }
    }
    cout<<x<<endl;
    for(int i=0;i<x;i++)
        cout<<y<<" ";

    return 0;
}
