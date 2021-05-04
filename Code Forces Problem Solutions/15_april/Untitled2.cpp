/**===========================================================================================
                                B H Yean Hasan (Noyen)
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
    #define ll long int
    #define pi acos(-1)
    #define vc vector<ll>
    #define pb(x) push_back(x)
    #define in(a) scanf("%lld",&a)
    #define print(x) cout<<x<<endl
    #define srt(a) sort(a.begin(),a.end())
    #define fr(i,n) for(ll i=0;i<n;i++)
    #define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(0);

using namespace std;
    ll input(){ll x; cin >> x; return x;}
    void display(int ar[], int first, int last){for(int i=first; i<last; i++){cout << ar[i] << " ";}cout<<endl;}
    void display(vector<int> ar, int first, int last){for(int i=first; i<last; i++){cout << ar[i] << " ";}cout<<endl;}

int main(){

    Fast;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

/*===========================================================================================*/
    ll count=0,n,a,b,c,Max1,Max2;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        Max1 = min(a,min(b,c));
        a-=Max1;
        b-=Max1;
        c-=Max1;

        Max2 = min(a,b);

        if(Max2==0)
        {
            Max2 = 0;
        }
        else
        {
            while(1)
            {
                if(Max2*3 <= a+b)
                {
                    break;
                }

                if(Max2<=0){
                    Max2 = 0;
                    break;
                }
                Max2--;
            }

        }
        cout<<Max1+Max2<<endl;
    }

/*===========================================================================================*/
    return 0;
}






