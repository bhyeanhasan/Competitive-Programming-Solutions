#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,z;

    cin>>n;
    int arr[n+1];

    for(int i=1;i<=n;i++)
        cin>>arr[i];

    for(int i=1;i<=n;i++)
    {
        x=arr[i];
        y=arr[x];
        z=arr[y];
        if(z==i)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        x=0;
        y=0;
        z=0;

    }
    cout<<"NO"<<endl;
    return 0;
}
