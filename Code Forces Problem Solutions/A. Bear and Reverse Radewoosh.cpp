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

    ll a,b,c,d,n,count=0,sum=0,result,j,k;
    bool is;
    string s;

    cin>>n>>c;
    ll p[n],t[n];

    fr(i,n)
    cin>>p[i];

    fr(i,n)
    cin>>t[i];

    j=0;
    fr(i,n)
    {
        j+=t[i];
        d=p[i]-c*j;

        if(d<0)
            d=0;
        count+=d;

    }
    j=0;

    for(ll i=n-1;i>=0;i--)
    {
                j+=t[i];

        d=p[i]-c*j;
        if(d<0)
            d=0;
        sum+=d;
    }



    if(count>sum)
        cout<<"Limak";
    else if(count<sum)
        cout<<"Radewoosh";
    else
        cout<<"Tie";


    return 0;
}

