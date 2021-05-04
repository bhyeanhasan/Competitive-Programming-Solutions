#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll int n,b,d,s=0,count=0;
    cin>>n>>b>>d;
    ll int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]<=b)
        {
            s+=arr[i];
            if(s>d){
                count++;
                s=0;
            }

        }
    }


     cout<<count<<endl;




    return 0;
}
