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
    ll tc = input();
    while(tc--)
    {
        ll n = input();
        ll arr[n];

        fr(i,n)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);

        if(n%2==0)
        {
            ll ok = n/2;
            for(ll i=n/2-1;i>=0;i--){
                cout<<arr[i]<<" "<<arr[ok]<<" ";
                ok++;
            }

        }
        else
        {
            ll ok = n/2+1;
            for(ll i=n/2;i>=0;i--){
                cout<<arr[i]<<" ";
                if(ok<n)
                    cout<<arr[ok]<<" ";
                ok++;
            }
        }
        cout<<endl;

    }
/*===========================================================================================*/
    return 0;
}







