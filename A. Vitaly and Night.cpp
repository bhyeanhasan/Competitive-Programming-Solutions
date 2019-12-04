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
#define in(a) scanf("%lld",&a)
#define srt(a) sort(a.begin(),a.end())


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    ll a,b,c,d,n,t,count=0,sum=0,result,i,j,k;
    bool is;
    string s;
    vc v;

    in(n);in(t);
    while(n--)
    {

        for(int i=0;i<2*t;i++)
        {
            in(a);
            v.push_back(a);
        }

        for(int i=0;i<2*t;i+=2)
        {
            if(v[i]==1 || v[i+1]==1)
                count++;
        }
        v.clear();


    }


    cout<<count;


    return 0;
}
