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
    ll t = input();
    while(t--)
    {
        ll n =input();
        map<ll,ll> mp;
        ll arr[n],brr[n];
        ll flag =1;
        ll sum=0;

        fr(i,n)
        {
            cin>>arr[i];
            if(arr[i]>0)
                brr[i]=1;
            else
                brr[i]=-1;
        }

        ll ma = arr[0];
        ll mo=0;

        for(ll i=0;i<n-1;i++)
        {
            if(brr[i]==brr[i+1])
            {
                ma =max(arr[i],ma);
            }
            else
            {
                sum+=ma;
                if(sum>mo)
                    mo=sum;
            }
        }
        cout<<mo<<endl;
    }
/*===========================================================================================*/
    return 0;
}







