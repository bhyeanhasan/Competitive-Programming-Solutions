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



using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    ll n,t,result,i,j,k;

    cin>>t;

    while(t--)
    {
        ll sum =0;
        cin>>i>>j>>k;

        while(j>=1 && k>=2)
        {
            sum+=3;
            j--;
            k-=2;
        }
        while(i>=1 && j>=2)
        {
            sum+=3;
            i--;
            j-=2;
        }

        cout<<sum<<endl;
    }

    return 0;
}


