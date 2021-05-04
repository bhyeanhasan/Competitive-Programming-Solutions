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
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            s+=arr[i];
        }
        int res =ceil(s/n);
        if(res*n<s)
            res+=1;
        cout<<res<<endl;
        s=0;
    }
    return 0;
}
