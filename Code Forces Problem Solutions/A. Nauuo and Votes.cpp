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


using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    ll a,b,c,d,n,t,count=0,sum=0,result,i,j,k;
    bool is;
    string s;

    cin>>a>>b>>c;

    d=max(a,b);
    n=abs(a-b);

    if(c==0)
    {
        if(a>b)
            cout<<"+";
        else if(a<b)
            cout<<"-";
        else
            cout<<0;
    }

    else if(c>=n)
    {
        cout<<"?"<<endl;
        return 0;
    }

    else if(a>b)
        cout<<"+";
    else if(a<b)
        cout<<"-";




    return 0;
}
