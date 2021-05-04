/*
    Md Babul Hasan (Noyen)
    Patuakhali Science and Technology University
    Faculty of Computer Science and Engineering
    16 th Batch (PSTU-CSE-2019)
    bhyean@gmail.com // B H Yean Hasan
*/

#include<bits/stdc++.h>
#define ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);

    ll n,m,count=0,xx,x,a,b;

    cin>>n>>m;
    map<int, int> mp;

    for(ll i=0;i<n;i++)
    {
        cin>>x;

        for(ll j=0;j<x;j++)
        {
            cin>>a;
            mp.insert(pair<int, int>(a, j));
        }
    }

//    map<int, int>::iterator itr;
//
//    for (itr = mp.begin(); itr != mp.end(); ++itr) {
//        cout << '\t' << itr->first
//             << '\t' << itr->second << '\n';
//    }


    xx=mp.size();

    if(xx==m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
