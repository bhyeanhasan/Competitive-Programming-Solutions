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

    ll tc,n,t,count=0,sum=0,result,Max=1000000000000000,i,j,k;
    bool is;
    string s;
    cin>>tc;
    while(tc--)
    {
        cin>>t;
        ll arr[t],brr[t];
        fr(i,t)
        cin>>arr[i]>>brr[i];

//        count=arr[0];

//        for(i=1;i<t;i++)
//        {
//            if(arr[i]>brr[i-1])
//            {
//                count+=brr[i]-arr[i];
//            }
//
//        }
//
//        k=arr[t-1];

        fr(i,t)
        {
            if(arr[i]<Max){
                Max=arr[i];
                k=i;

            }
        }


        sum = arr[k];
       // cout<<sum<<endl;
        for(i=k+1;i<t;i++)
        {
            if(arr[i]>brr[i-1])
            {
                sum+= arr[i]-brr[i-1];
            }
        }
       // cout<<sum<<endl;
        for(i=0;i<k;i++)
        {
            if(i==0)
            {
                if(arr[0]>brr[t-1])
                    sum+=arr[0]-brr[t-1];
            }
            else if(arr[i]>brr[i-1])
            {
                sum+=arr[i]-brr[i-1];
            }
        }

        cout<<sum<<endl;
        sum=0;count=0;
        Max=1000000000000000;

    }

    return 0;
}

