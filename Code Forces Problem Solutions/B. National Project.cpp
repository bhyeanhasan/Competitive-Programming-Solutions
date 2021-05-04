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

    ll t,n,good,bad;

    cin>>t;

    while(t--)
    {
        cin>>n>>good>>bad;

        ll time = good+bad;
        ll goodRoad = (n+1)/2;

        ll day = (goodRoad/good)*time;

        if(goodRoad%good == 0)
        {
            day = day-bad; // time hocce good+bad tai %==0 hole ekhane bad extra
        }
        else
        {
            day=day + (goodRoad%good);
        }

        cout<<max(n,day)<<endl; // goodRoad n din age hole e hobe na karon baki road o complete korte hobe


    }



    return 0;
}


