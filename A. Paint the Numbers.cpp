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


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    ll a,b,c,d,n,t,count=0,sum=0,result,x,xx,i,j,k;
    bool is=false;
    string s;

    cin>>n;
    ll v[n];

    for(ll i=0;i<n;i++)
        cin>>v[i];

    sort(v,v+n);
    xx=v[n-1];
    x=v[0];
    for(i=x ; i<=xx ; i++)
    {
        for(j=0;j<n;j++)
        {
            if(v[j]!=0 && v[j]%i==0)
            {
                v[j]=0;
                is=true;

            }
        }

        if(is==true)
            {
                count++;
                is=false;
            }



    }
    cout<<count;

    return 0;
}


