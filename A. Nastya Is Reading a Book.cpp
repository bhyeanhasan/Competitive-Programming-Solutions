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

    ll a,b,c,d,n,t,count=0,sum=0,result,i,j,k;
    bool is;
    string s;

    cin>>t;

    ll arr[t][2];

    for(ll i=0;i<t;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
    }
    cin>>k;


    for(ll i=0;i<t;i++)
    {
        if(k>=arr[i][0] && k<=arr[i][1])
            a=i;

    }

    cout<<t-a;



    return 0;
}
