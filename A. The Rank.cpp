/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include<bits/stdc++.h>
#include <algorithm>
#define ll int
#define pi acos(-1)
#define vc vector<ll>
#define in(a) scanf("%lld",&a)
#define srt(a) sort(a.begin(),a.end())
#define fr(i,n) for(ll i=0;i<n;i++)


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    ll a,b,c,d,n,m,t,count=0,sum=0,result,i,j,k;
    bool is;
    string s;

    cin>>n;
    ll arr[n];

    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c>>d;
        arr[i]=a+b+c+d;

    }
    t=arr[0];

    sort(arr, arr+n, greater<int>());

    for(i=0;i<n;i++)
    {
        if(arr[i]==t)
        {
            cout<<i+1;
            break;
        }
    }




    return 0;
}


