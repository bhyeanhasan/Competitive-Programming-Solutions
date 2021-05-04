#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int n=x/2;

    for(int i=0;i<x/2+1;i++)
    {
        for(int j=0;j<n-i;j++)
            cout<<"*";

        for(int j=0;j<=i*2;j++)
            cout<<"D";

        for(int j=0;j<n-i;j++)
            cout<<"*";

      cout<<endl;

    }

     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<"*";

        for(int j=1;j<=x-(i*2);j++)
            cout<<"D";
        for(int j=1;j<=i;j++)
            cout<<"*";

        cout<<endl;
    }


    return 0;
}
