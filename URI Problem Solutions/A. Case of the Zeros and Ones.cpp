/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    ll n,l,lf,x=0,i,count=0;
    cin>>n;

    bool is=false;

    string s;
    cin>>s;

    for(i=0;i<n;i++)
    {
        if(s[i]=='1')
            count++;
        else
            x++;
    }
    cout<<n-2*(min(count,x))<<endl;

    return 0;
}

