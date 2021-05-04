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

    cin>>s;

    for(i=0;i<s.size();i++)
    {
        if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            count++;
        if(s[i]=='1'|| s[i]=='3' || s[i]=='5' || s[i]=='7' || s[i]=='9')
            count++;
    }

    cout<<count;




    return 0;
}

