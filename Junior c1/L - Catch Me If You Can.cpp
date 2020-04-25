#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define pb push_back
#define sf scanf
#define pf printf
vector<ll> x_ind,y_ind,duidai;
vector<ll> dam;
ll taka;

bool pas(int mid,ll x,ll y){
     int f=x_ind[mid],s=y_ind[mid],both=duidai[mid];
     bool ok=true;
     if(x<y) ok=false;
     ll sum=0;
     for(int i=0;i<mid;i++){
        if(both){
            sum+=dam[i]*(x+y);
            both--;
        }
        else if(ok){
        if(f){
             sum+=dam[i]*x;
             f--;

        }
        else if(s){
                sum+=dam[i]*y;
                s--;

        }

        }
        else{
            if(s){
                sum+=dam[i]*y;
                s--;

        }
        else  if(f){
             sum+=dam[i]*x;
             f--;

        }

        }
     }
     return sum>=taka;

}
int main(){
    int t=1;
       sf("%d",&t);
    while(t--){
        int n;
        sf("%d",&n);
           dam.resize(n);
           x_ind.resize(n+1);
           y_ind.resize(n+1);
           duidai.resize(n+1);
           for(auto &in : dam ) {
                sf("%lld",&in);
           in/=100;
           }
           sort(dam.rbegin(),dam.rend());
        int x,y;
        ll x_per,y_per;
        sf("%lld%d",&x_per,&x);
        sf("%lld%d",&y_per,&y);
        sf("%lld",&taka);
        for(int i=1;i<=n;i++){
            if((i%x)==0 && (i%y)==0) duidai[i]++;
            else if(i%x==0) x_ind[i]++;
            else if(i%y==0) y_ind[i]++;
            x_ind[i]+=x_ind[i-1];
            y_ind[i]+=y_ind[i-1];
            duidai[i]+=duidai[i-1];
        }

        int high=n+1;
        int low=0;
        int mid;

        while(high-low>1){
                mid=(high+low)/2;
                if(pas(mid,x_per,y_per)) high=mid;
                else low=mid;

        }
        if(high>n) pf("-1\n");
        else pf("%d\n",high);
        dam.clear();
        x_ind.clear();
        y_ind.clear();
        duidai.clear();

    }

}
