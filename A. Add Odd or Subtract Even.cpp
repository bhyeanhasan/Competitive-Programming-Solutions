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

<<<<<<< Updated upstream
<<<<<<< Updated upstream
    ll n,t,count=0,sum=0,result,i,a,b,j,k;
    bool is;
    string s;

    cin>>n;

    while(n--)
    {


    cin>>a>>b;

    if(a<b)
    {
        if((b-a)%2==1)
        {
            cout<<1<<endl;
        }
        else
            cout<<2<<endl;
    }
    else if(b<a)
    {
        if((a-b)%2==1)
        {
            cout<<2<<endl;
        }
        else
            cout<<1<<endl;
    }
    else
        cout<<0<<endl;
=======
=======
>>>>>>> Stashed changes
    ll n,t,count=0,sum=0,result,i,j,k;
    bool is;
    string s;

    cin>>k;
    while(k--)
    {

    cin>>t>>j;

    n=abs(j-t);

    if(n==0){
        cout<<0<<endl;
    }
    else if(t<j){
    if(n%2==0)
    {
        cout<<2<<endl;
    }
    else{
        cout<<1<<endl;
    }
    else
    {
        if(n%2==0)
    {
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }

    }

<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes


    }

    return 0;
}

