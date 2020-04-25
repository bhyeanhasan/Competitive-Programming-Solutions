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

    ll n,t,count=0,sum=0,result,i,j,k,l,r,d,u,x,y,x1,x2,y1,y2,a,b;
    bool is;
    string s;

    cin>>t;

    while(t--)
    {
        cin>>l>>r>>d>>u;
        cin>>x>>y>>x1>>y1>>x2>>y2;

        if(x-x1<l)
        {
            l=l-(x-x1);
            x=x1;
        }
        else
        {
            l=0;
            x=x-l;
        }

        if(y-y1<d)
        {
            d=d-(y-y1);
            y=y1;
        }
        else
        {
            d=0;
            y=y-d;
        }

        a = abs(l-r);
        b = abs(d-u);

        x=x2-x;
        y=y2-y;

        if(a<=x && b<=y)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}



