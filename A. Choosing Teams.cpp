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

    ll n,k,x,count=0;
    cin>>n>>k;

    vector<ll> v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        x=x+k;
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    for(int i=0;i<n;i++)
    {
        if(v[i]<=5)
            count++;
    }
    int ans=count/3;

    cout<<ans<<endl;

    return 0;
}
