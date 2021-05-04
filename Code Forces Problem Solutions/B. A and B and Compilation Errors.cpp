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

    ll n,t,count=0,sum=0,result,i,j,k;
    bool is;
    string s;

    cin>>n;
    ll arr[n],brr[n-1],crr[n-2];

    fr(n)
    cin>>arr[i];

    sort(arr,arr+n);

    fr(n-1)
    cin>>brr[i];

    sort(brr,brr+n-1);

    fr(n-2)
    cin>>crr[i];

    sort(crr,crr+n-2);

    j=arr[n-1];
    k=brr[n-2];

    fr(n-1)
    {
        if(arr[i] != brr[i]){
        j=arr[i];
        break;
        }
    }

    fr(n-2)
    {
        if(brr[i] != crr[i]){
        k=brr[i];
        break;
        }
    }

    cout<<j<<endl;
    cout<<k<<endl;





    return 0;
}


