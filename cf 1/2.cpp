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
    ll a,b,c,d,count=0,sum=0,s=0,result;
    int n,t;

    unordered_set<int> mp;
    unordered_set<int>:: iterator it;
    cin>>n>>t;
    int arr[n];
    it=mp.begin();

    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        mp.insert(arr[i]);



    }

    for(it=mp.begin();it != mp.end();it++)
        cout<<*it<<endl;

    return 0;
}
