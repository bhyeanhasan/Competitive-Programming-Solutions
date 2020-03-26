/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
#define vc vector<ll>
#define in(a) scanf("%d",&a)
#define srt(a) sort(a.begin(),a.end())
#define fr(n) for(ll i=0;i<n;i++)
bool isprime(ll n){if(n < 2) return 0; ll i = 2; while(i*i <= n){if(n%i == 0) return 0; i++;} return 1;}

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    ll n,t,result,i,j,k;
    ll fp=0,fn=0,sp=0,sn=0;

    cin>>n>>t;
    ll arr[n],brr[t];

    fr(n)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            fp++;
        }
        else
            fn++;
    }

    fr(t)
    {
        cin>>brr[i];
        if(brr[i]%2==0)
            sp++;
        else
            sn++;
    }

    cout<<min(fp,sn)+min(fn,sp)<<endl;



}


