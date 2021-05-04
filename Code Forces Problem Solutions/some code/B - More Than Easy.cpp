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

        string s;
        string ss = "hello";
        ll l = s.size();
        ll k =0;
        ll found =0;
        cin>>s;

        found = s.find('h');
        if (found != string::npos)
        {
            s = s.substr(found+1);
            //cout<<s<<endl;
            found = s.find('e');

            if (found != string::npos)
            {
                s = s.substr(found+1);
                            //cout<<s<<endl;

                found = s.find('l');

                    if (found != string::npos)
                    {
                        s = s.substr(found+1);
                                    //cout<<s<<endl;

                        found = s.find('l');
                        if (found != string::npos)
                        {
                            s = s.substr(found+1);
                                        //cout<<s<<endl;

                            found = s.find('o');
                            if (found != string::npos)
                            {
                               yes;
                               return 0;
                            }
                        }
                    }

            }
        }

            no;

/*===========================================================================================*/
    return 0;
}







