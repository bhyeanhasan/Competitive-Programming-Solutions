#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,l;
    cin>>n>>l;
    ll arr[n];

    for(ll i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);

    ll diff=0;
    for(ll i=1;i<n;i++)
    {
        ll d=arr[i]-arr[i-1];
        diff=max(diff,d);

    }

    double p1=(double)arr[0]-0;
    double pn= (double)l-arr[n-1];

    double res =(double) diff*1.00/2;

    res=max(res,max(p1,pn));


    printf("%.10f",res);


    return 0;
}
