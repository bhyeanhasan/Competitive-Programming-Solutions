<<<<<<< Updated upstream
<<<<<<< Updated upstream
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

=======
=======
>>>>>>> Stashed changes
#include<bits/stdc++.h>

    #include<bits/stdc++.h>
    #define pi acos(-1)
    #define jor_even(i) (!(i & 1))
    #define bijor_odd(i) (i & 1)
    #define gcd(a, b) __gcd(a,b)
    #define lcm(a, b) (((a)/gcd(a,b))*b)
    #define binaryToDecimal(str) stoi(str,nullptr,2)
    #define octalToDecimal(str) stoi(str,nullptr,8)
    #define hexaToDecimal(str) stoi(str,nullptr,16)
    #define fil(arr,value) memset(arr,value,arr.size())
    #define vfill(v,value)  v.assign(v.size(),value)
    #define pb(x) push_back(x)
    #define ll long long int
    #define vc vector<ll>
    #define show(arr) for( auto &it : arr ) cout<<it<<" "
    #define input(arr) for( auto &it : arr ) cin>>it
    #define fr(i,n) for(ll i=0;i<n;i++)
    #define srt(a) sort(a.begin(),a.end())
    #define print(x) cout<<x<<endl
    #define in(a) scanf("%lld",&a)
    #define yes cout<<"YES"<<endl
    #define no cout<<"NO"<<endl
    #define FILE_io freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    #define TEST ll test; cin>>test; for(ll T=1;T<=test;T++)
    #define START ll n,a,b,c,x,y,z,i,j,k,sum=0,t=0,count=0,flag=0,place=-1; string s,s1,s2,s3; bool is = false; double Sum=0;
    #define READY ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(0);
<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes

using namespace std;

int main()
{
<<<<<<< Updated upstream
<<<<<<< Updated upstream
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    ll a,b,c,d,n,t,count=0,sum=0,result,i,j,k;
    bool is;
    string s;

    cin>>n>>a;





=======
=======
>>>>>>> Stashed changes
    int a,b;
    cin>>a>>b;
    vector <ll> vec;
    if(a*9<b || b<1)
    {
        cout<<-1<< " "<<-1<<endl;
    }
    else{
        while(b>=9)
        {
            vec.push_back(9);
            b-=9;
        }
        vec.push_back(b);

        ll x = vec.size(),i;

        for(i=x-1;i>=0;i--)
        {
            cout<<vec[i];
        }
        cout<<" ";
        for(i=0;i<x;i++)
        {
            cout<<vec[i];
        }
        cout<<endl;

    }
<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes


    return 0;
}
<<<<<<< Updated upstream
<<<<<<< Updated upstream


=======
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes
