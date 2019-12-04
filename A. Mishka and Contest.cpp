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

    ll n,m,count=0,xx,x=1,a,b;

    cin>>n>>m;

    ll arr[n];

    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(ll i=0;i<n;i++)
    {
        if(x==1)
        {
            if(arr[i]<=m)
                count++;
            else
                break;

                x=0;
        }

        else if(x==0)
        {
            if(arr[n-1-i]<=m)
                count++;
            else
                break;

                x=1;
        }
    }

    cout<<count;

    return 0;
}
