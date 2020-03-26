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

    long long int a,b,c,d,n,t,count=0,sum=0,result,j,k;

    cin>>t;

    for(j=0;j<t;j++)
    {

        cin>>a>>b>>c>>n;

        d=max(a,max(b,c));
        sum=(d-a)+(d-b)+(d-c);
        if(sum>n)
        {
            cout<<"NO"<<endl;
        }

        else if((a+b+c+n)%3==0)
        {

            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}

