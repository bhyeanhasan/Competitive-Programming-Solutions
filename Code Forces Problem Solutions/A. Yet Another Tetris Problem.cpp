/**===========================================================================================
                                B H Yean Hasan (Noyen)
                    Patuakhali Science and Technology University
                     Faculty of Computer Science and Engineering
                      bhyean16@cse.pstu.ac.bd /bhyean@gmail.com
/*===========================================================================================**/


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
        ll n =input();
        ll arr[n];
        bool is = true;
        ll brr[n-1];
        vc v;
        fr(i,n)
            cin>>arr[i];
        sort(arr,arr+n);

        for(ll i=1;i<n;i++)
        {
            if((arr[i]-arr[i-1])%2==1)
            {
                //print(arr[i]-arr[i-1]);
                is = false;
                break;
            }
        }

        if(is==false)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
/*===========================================================================================*/
    return 0;
}






