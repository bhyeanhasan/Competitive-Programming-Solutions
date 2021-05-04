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

    ll a,b,c,d,n,t,count=0,sum=0,result,i,j,k;
    bool is;

    cin>>n;

    fr(j,n)
    {
        cin>>t;
        int arr[t];
        fr(i,t)
        {
            arr[i];
        }
        sort(arr,arr+t);
        fr(i=arr[t-1];i>=0;i--)
        {
            fr(k,t)
            {
                if(arr[k]>=i)
                {
                    count++;
                }
                if(count>=i)
                    cout<<i<<endl;
            }
        }
    }





    return 0;
}

