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
    #define NoYoN_Variables ll a,b,c,x,y,z,i,j,k,sum=0,t=0,count=0,flag=0; string s,s1,s2,s3; bool is = false; double Sum=0;
    #define By_NoYoN ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(0);

using namespace std;
    string sss;
    ll input(){ll x; cin>>x; return x;}
    void show(ll ar[], ll first, ll last){for(ll i=first; i<last; i++){cout << ar[i] << " ";}cout<<endl;}
    void show(vector<ll> ar, ll first, ll last){for(ll i=first; i<last; i++){cout << ar[i] << " ";}cout<<endl;}
    //string toString(__int128 num) { string str; do { int digit = num % 10; str = std::to_string(digit) + str; num = (num - digit) / 10;} while (num != 0);return str;}
                                                                            void bin(ll x){if(x>1)bin(x/2);sss = sss + to_string(x%2);}
                                                                            void oct(ll x){if(x>1)oct(x/8);sss = sss + to_string(x%8);}
                                                                            void hex(ll x){ ll o; if(x>1) hex(x/16); o = x%16;if(o==10) sss = sss +"A";else if(o==11) sss = sss +"B";else if(o==12) sss = sss +"C"; else if(o==13) sss = sss +"D";else if(o==14)sss = sss +"E";else if(o==15)sss = sss +"F";else sss = sss + to_string(o);}
    string decToBin(ll x){sss="";bin(x);return sss;}
    string decToOct(ll x){sss="";oct(x);if(sss.size()>1 && sss[0]=='0') sss.erase(sss.begin());return sss;}
    string decToHex(ll x){sss="";hex(x);if(sss.size()>1 && sss[0]=='0') sss.erase(sss.begin()); return sss;}


int main()
{
    By_NoYoN;
    NoYoN_Variables;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //tc
{
/*===========================================================================================*/
    cin>>a>>b;

    fr(i,a)
    {
        fr(j,b)
        {
            char ch;
            cin>>ch;
            if(ch=='C' || ch=='M' || ch=='Y')
                is = true;
        }
    }
    if(is)
        print("#Color");
    else
        print("#Black&White");
/*===========================================================================================*/
} return 0; }



