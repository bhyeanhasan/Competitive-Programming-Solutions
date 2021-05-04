/*
    B H Yean Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    bhyean16@cse.pstu.ac.bd / bhyean@gmail.com
*/

#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
#define vc vector<ll>
#define pb(x) push_back(x)
#define in(a) scanf("%lld",&a)
#define print(x) cout<<x<<endl
#define srt(a) sort(a.begin(),a.end())
#define fr(i,n) for(ll i=0;i<n;i++)
#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(0);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
ll input(){ll x; cin >> x; return x;}
void display(int ar[], int first, int last){for(int i=first; i<last; i++){cout << ar[i] << " ";}cout<<endl;}
void display(vector<int> ar, int first, int last){for(int i=first; i<last; i++){cout << ar[i] << " ";}cout<<endl;}

void solve(int t){
    int n = input(), x=0, y=0, a, b;
    bool flag=true;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        if(b>a || a<x || b<y || a-x < b-y){
            flag=false;
        }
        x=a; y=b;
    }
    flag? yes : no;
}


int main(){
    Fast;
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    /*===========================================================================================*/

    int tc = input();
    for(int i=1; i<=tc; i++){
        solve(i);
    }

    /*===========================================================================================*/

    return 0;
}

