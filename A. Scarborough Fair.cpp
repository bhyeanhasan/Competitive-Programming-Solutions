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

    ll a,b,n,t,count=0,sum=0,result,i,j,k,m;
    string s;
    char c,d;


    cin>>n>>m;
    cin>>s;

    while(m--)
    {
        cin>>a>>b>>c>>d;
        for(int i=a-1;i<b;i++)
        {
            if(s[i]==c)
                s[i]=d;
        }

//        cout<<s<<endl;

    }


    cout<<s;



    return 0;
}
