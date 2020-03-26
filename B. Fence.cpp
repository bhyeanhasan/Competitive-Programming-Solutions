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
#define fr(i,n) for(ll i=0;i<n;i++)
bool isprime(ll n){if(n < 2) return 0; ll i = 2; while(i*i <= n){if(n%i == 0) return 0; i++;} return 1;}


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    ll n,t,count=0,sum=0,result,i,j,k;
    bool is;
    string s;


    cin>>n>>t;

    if(n<=t)
    {
        cout<<1<<endl;
        return 0;
    }
    ll arr[n+1];
    ll Min =99999999;
    arr[0]=0;

   for(i=1;i<=n;i++)
   {
       cin>>arr[i];
       arr[i]=arr[i]+arr[i-1];
   }

    for(i=t;i<=n;i++)
    {

        if(Min>arr[i]-arr[i-t])
        {
            Min=arr[i]-arr[i-t];
            k=i;
        }
    }

    cout<<k-t+1<<endl;


    return 0;
}


