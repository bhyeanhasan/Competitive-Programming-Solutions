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

    string s;

    cin>>t;

    while(t--)
    {
        ll count=0,sum=0;

        cin>>n;
        ll arr[n];

        for(i=0;i<n;i++)
        {
            cin>>arr[i];

            sum+=arr[i];

            if(arr[i]%2==1)
                count++;  //bijor ase koyta

        }


        if(sum%2==1)
        {
            cout<<"YES"<<endl;
        }
        else if(count>0 && count<n)
        {
            cout<<"YES"<<endl;
        }

        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}


