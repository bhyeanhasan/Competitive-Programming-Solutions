/**===========================================================================================
                                B H Yean Hasan (NoYoN)
                    Patuakhali Science and Technology University
                     Faculty of Computer Science and Engineering
<<<<<<< Updated upstream
<<<<<<< Updated upstream
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
#define NoYoN_Variables ll n,a,b,c,m,x,y,z,i,j,k,sum=0,t=0,count=0,flag=0; string s,s1,s2,s3; bool is = false; double Sum=0;
#define By_NoYoN ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(0);

using namespace std;
string sss;
ll input()
{
    ll x;
    cin>>x;
    return x;
}
void show(ll ar[], ll first, ll last)
{
    for(ll i=first; i<last; i++)
    {
        cout << ar[i] << " ";
    }
    cout<<endl;
}
void show(vector<ll> ar, ll first, ll last)
{
    for(ll i=first; i<last; i++)
    {
        cout << ar[i] << " ";
    }
    cout<<endl;
}



int main()
{
    By_NoYoN;
    NoYoN_Variables;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //tc
    {
        /*===========================================================================================*/
        cin>>n>>m;
        if(m==0 && n==1)
        {
            cout<<0<<" "<<0<<endl;
        }
        else if(n*9>=m && m!=0)
        {
            x = m%9;
            y = m/9;
            a = y;
            int ch[n];
            int arr[n];

            for(int i=0;i<n;i++)
            {
                if(y>0)
                {
                    ch[i]=9;
                    y--;
                }
                else if(x>0)
                {
                    ch[i] =x;
                    x=0;
                }
                else
                {
                    ch[i]=0;;
                }
                arr[i] = ch[i];
            }



            if (arr[n-1]==0)
            {
                for(int i=n-1;i>=0;i--)
                {
                    if(arr[i]>0)
                    {
                        arr[i] = arr[i]-1;
                        break;
                    }
                }
                arr[n-1] = 1;
            }

             for(int i=n-1;i>=0;i--)
            {
                cout<<arr[i];
            }
            cout<<" ";
             for(int i=0;i<n;i++)
            {
                cout<<ch[i];
            }
            cout<<endl;

        }
        else
        {
            cout<<-1<< " "<<-1<<endl;
        }
        /*===========================================================================================*/
    }

}




