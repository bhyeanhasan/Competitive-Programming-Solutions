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
#define lvc vector<ll>
#define ivc vector<int>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    ll a,b,c,d,n,t,count=0,sum=0,result,i,j,k;
    string s;
    bool is;



    cin>>n;

    vector<string> v;
    vector<string> vv;

    for(i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
    }

    for(i=n-1;i>0;i--)
    {
        for(j=i-1;j>=0;j--)
        {
            if(v[i].compare(v[j])==0)
                is = true;

        }


        if(is)
        {
            vv.push_back("YES");
        }
        else
        {
            vv.push_back("NO");
        }

        is=false;
    }

    vv.push_back("NO");

    for(i=vv.size()-1;i>=0;i--)
        cout<<vv[i]<<endl;



    return 0;
}
