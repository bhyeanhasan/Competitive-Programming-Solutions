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

    ll l,n,c=0;

    string s;
    cin>>s;
    l=s.size();
    for(ll i=0;i<l;i++)
    {
        if(s[i]=='Q')
        for(ll j=i+1;j<l;j++)
        {
            if(s[j]=='A')
            for(ll k=j+1;k<l;k++)
            {
                if(s[k]=='Q')
                    c++;
            }
        }
    }

    cout<<c<<endl;



    return 0;
}
