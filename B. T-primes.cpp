<<<<<<< Updated upstream
/**===========================================================================================
                                B H Yean Hasan (NoYoN)
                    Patuakhali Science and Technology University
                     Faculty of Computer Science and Engineering
                      bhyean16@cse.pstu.ac.bd /bhyean@gmail.com
/*===========================================================================================**/
/*============================================
    Duplicate line 	    Ctrl + D
    Auto -complete	    Ctrl + Space
    Abbreviations       Ctrl + J
    Swap line above 	Ctrl + T
    Recent files.	    Ctrl + Tab
    Indent/Dedent		Tab/Shift + Tab
    Line cut.	        Ctrl + L
    Line copy.      	Ctrl + Shift + c
    Line delete.	    Ctrl + Shift + L
    move line           Alt+up/Alt+down
/*=============================================*/
    #include<bits/stdc++.h>
    #define pi acos(-1)
    #define binaryToDecimal(str) stoi(str,nullptr,2)
    #define octalToDecimal(str) stoi(str,nullptr,8)
    #define hexaToDecimal(str) stoi(str,nullptr,16)
    #define even(i) (!(i & 1))
    #define odd(i) (i & 1)
    #define SQ(a) ((a)*(a))
    #define QU(a) ((a)*(a)*(a))
    #define gcd(a, b) __gcd(a,b)
    #define lcm(a, b) (((a)/gcd(a,b))*b)
    #define fil(arr,value) memset(arr,value,arr.size())
    #define vfill(v,value)  v.assign(v.size(),value)
    #define ll long long int
    #define LN __int128
    #define Max LONG_LONG_MAX
    #define Min LONG_LONG_MIN
    #define vc vector<ll>
    #define pb(x) push_back(x)
    #define in(a) scanf("%lld",&a)
    #define point(x,d) cout<<fixed<<setprecision(d)<<x
    #define print(x) cout<<x<<endl
    #define srt(a) sort(a.begin(),a.end())
    #define fr(i,n) for(ll i=0;i<n;i++)
    #define yes cout<<"YES"<<endl
    #define no cout<<"NO"<<endl
    #define tc ll test = input(); for(ll T=1;T<=test;T++)
    #define NoYoN_Variables ll n,a,b,c,x,y,z,i,j,k,sum=0,t=0,count=0,flag=0; string s,s1,s2,s3; bool is = false; double Sum=0;
    #define By_NoYoN ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(0);
=======
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
#define fr(n) for(ll i=0;i<n;i++)
bool isprime(ll n){if(n < 2) return 0; ll i = 2; while(i*i <= n){if(n%i == 0) return 0; i++;} return 1;}

>>>>>>> Stashed changes

using namespace std;
    string sss;
    ll input(){ll x; cin>>x; return x;}


<<<<<<< Updated upstream
=======
    ll n,t,count=0,sum=0,result,i,j,k;
    bool is;
    string s;
>>>>>>> Stashed changes

int main()
{
    By_NoYoN;
    NoYoN_Variables;
    //tc
{
/*===========================================================================================*/
    cin>>n;

<<<<<<< Updated upstream
    fr(i,n)
        cin>>arr[i];
=======
    ll arr[n];
>>>>>>> Stashed changes

    for(i=0;i<n;i++)
    {
<<<<<<< Updated upstream
        x= sqrt(arr[i]);
        for(j=2;j*j<=x;j++)
        {
            if(arr[i]%j==0)
                break;
        }
        if(arr[i]==1)
            no;
        else if(x*x == arr[i] && j*j>x)
            yes;
        else
            no;
    }

/*===========================================================================================*/
} return 0; }
=======
        cin>>arr[i];

        is = false;

        t = sqrt(arr[i]);

        if(t*t == arr[i] && arr[i]%2 != 0)
        {
>>>>>>> Stashed changes

            for(j=3;j*j<t;j+=2)
            {
                if( t%j == 0 )
                {
                    is = false;
                    break;
                }

                is = true;

<<<<<<< Updated upstream
=======
            }
        }
        if(is || arr[i]==4 || arr[i]==9)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;



}
 return 0;
}


>>>>>>> Stashed changes
