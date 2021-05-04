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
    ll a = input();
    float ok ;
    cin>>ok;

    if(a%5==0 && a<ok)
        printf("%0.2f",(ok-a-.05));
    else
        printf("%0.2f",ok);
/*===========================================================================================*/
    return 0;
}





























