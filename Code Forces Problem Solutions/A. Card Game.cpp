/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include<bits/stdc++.h>
#define ll long long int
#define pi acos(-1)
#define vc vector<ll>
#define in(a) scanf("%d",&a)
#define srt(a) sort(a.begin(),a.end())
#define fr(i,n) for(ll i=0;i<n;i++)


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    ll n,t,count=0,sum=0,result,i,j,k;
    bool is;
    string s;

    cin>>t;

    while(t--)
    {
        ll first,second;
        cin>>n>>first>>second;
        ll arr1[first],arr2[second];

        ll one=-1,two=0;

        for(ll i=0;i<first;i++){
            cin>>arr1[i];
            if(one<arr1[i])
            {
                two=1;
                one=arr1[i];
            }
        }
        for(ll i=0;i<second;i++){
            cin>>arr2[i];
            if(one<arr2[i])
            {
                two=2;
                one=arr2[i];
            }
        }




        if(two==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;



    }

    return 0;
}

