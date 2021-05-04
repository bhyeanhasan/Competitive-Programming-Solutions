#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    ll n,cnt=0,cnt1=0,mx,mn,c=0,c1=0;
    cin>>n;
    vector<ll> v(n),vt(n);
    map<ll,ll> mp,m;
    for(int i=0;i<n;i++) cin>>v[i];
    vt=v;
    sort(vt.begin(),vt.end());
    if(*max_element(vt.begin(),vt.end())==v[v.size()-1]) c1=1;
     if(*min_element(vt.begin(),vt.end())==v[0]) {c=1;cout<<"yes"<<endl;}
    for(int i=0;i<n;i++)
    {
        if(i==0) {mp[v[i]]++;mx=v[i];continue;}
        if(i!=0&&v[i]==v[0]&&mp[v[i]]<2&&mx>v[i])
        {
             cnt++;mp[v[i]]++;
             c=0;
        }
        else if(mx>v[i]&& mp[v[i]]<1)
        {
            cnt++;mp[v[i]]++;
        }
        else if(mx<v[i]) mx=v[i];

    }
    for(int i=v.size()-1;i>=0;i--)
    {


        if(i==v.size()-1) {m[v[i]]++;mn=v[i];continue;}
        if(i!=v.size()-1&&v[i]==v[v.size()-1]&&m[v[i]]<2)
        {
             cnt1++;m[v[i]]++;c1=0;
        }
        else if(mn<v[i]&& m[v[i]]<1)
        {
            cnt1++;m[v[i]]++;
        }
        else if(mn>v[i]) mn=v[i];

    }
    cout<<"--------------...>>>>";
    if(cnt>=1) cnt+=c;
    if(cnt1>=1) cnt1+=c1;

    cnt<=cnt1? cout<<cnt<<endl:cout<<cnt1<<endl;

    }
}
