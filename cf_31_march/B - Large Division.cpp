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


int main() {

    ll n,t,tc,count=0,sum=0,result,i,l,j,k;
    string s;

    cin>>tc;

    while(tc--)
    {
        sum=0,result=0;
        count++;
        cin>>s>>n;
        l= s.size();

        if(s[0]=='-')
            i=1;
        else
            i=0;

        for(;i<l;i++)
        {
            sum = sum*10 + (s[i]-'0');
            sum = sum%n;
        }

        if(sum%n==0)
            cout<<"Case "<<count<<": divisible"<<endl;
        else
            cout<<"Case "<<count<<": not divisible"<<endl;


    }
    return 0;

}


