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

    ll n,m,count=0,xx,x=1,a,b,i;

    cin>>n>>m;

    ll arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]<=m)
            count++;
        else{
            xx=i;
            break;
        }

    }

    for(i=n-1;i>=xx;i--)
    {
        if(arr[i]<=m)
            count++;
        else
            break;
    }
    cout<<count;

    return 0;
}
