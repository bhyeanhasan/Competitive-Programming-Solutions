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
    void show(vector<ll> ar){for(int i=0; i<ar.size(); i++){cout << ar[i] << " ";}cout<<endl;}
    ll is(ll n){ if(n>0) return 1; return 0;}

int main(){

    Fast;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

/*===========================================================================================*/
    tc
    {
        ll n = input();
        vc v;
        ll index;
        ll sum=0;
        fr(i,n)
        {
            ll x = input();
            if(i==0)
            {
               v.pb(x);
               index=0;
            }
            else{
                if(is(x) != is(v[index]))
                {
                    v.pb(x);
                    index++;
                }
                else
                {
                    v[index] = max(v[index],x);
                }
            }
        }

        for(ll i=0;i<v.size();i++)
        {
            sum+=v[i];
        }
        print(sum);
        sum=0;
    }

/*===========================================================================================*/
    return 0;
}







