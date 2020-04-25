/**===========================================================================================
                                B H Yean Hasan (Noyen)
                    Patuakhali Science and Technology University
                     Faculty of Computer Science and Engineering
                      bhyean16@cse.pstu.ac.bd /bhyean@gmail.com
/*===========================================================================================**/

    #include<bits/stdc++.h>
    #define ll long long int
    #define pi acos(-1)
    #define vc vector<ll>
    #define pb(x) push_back(x)
    #define in(a) scanf("%lld",&a)
    #define print(x) cout<<x<<endl
    #define srt(a) sort(a.begin(),a.end())
    #define fr(i,n) for(ll i=0;i<n;i++)
    #define yes cout<<"YES"<<endl
    #define no cout<<"NO"<<endl
    #define  tc ll test = input(); while(test--)
    #define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(0);

using namespace std;
    ll input(){ll x; cin>>x; return x;}
    void show(int ar[], int first, int last){for(int i=first; i<last; i++){cout << ar[i] << " ";}cout<<endl;}
    void show(vector<int> ar, int first, int last){for(int i=first; i<last; i++){cout << ar[i] << " ";}cout<<endl;}

int main(){

    Fast;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

/*===========================================================================================*/
    ll x,n;
    cin>>x>>n;
    ll arr[n],brr[n];
    fr(i,n)
    cin>>arr[i]>>brr[i];

    for(ll i=0;i<n-1;i++)
    {
        for(ll j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swap(brr[j],brr[j+1]);
            }
        }
    }

    fr(i,n)
    {
        if(arr[i]<x)
        {
            x=x+brr[i];
        }
        else
        {
            no;
            return 0;
        }
    }
    yes;
/*===========================================================================================*/
    return 0;
}






