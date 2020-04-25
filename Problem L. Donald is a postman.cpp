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

    ll n,t,count=1,sum=0,result,i,j,k,position=1;
    bool is;
    string s;


    cin>>t;

    while(t--)
    {
        cin>>s;
        if(s[0]=='A' || s[0]=='P' || s[0]=='O' || s[0]=='R' )
        {
            count=1;
        }
        else if(s[0]=='B' || s[0]=='M' || s[0]=='S' )
        {
            count = 2;
        }
        else
        {
            count = 3;
        }


        sum = sum+abs(count-position);

        position=count;
    }


    cout<<sum<<endl;





    return 0;
}

