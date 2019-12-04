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
    ll a,b,c,d,count=0,n,sum=0,s=0,result;
    cin>>n;
    int arr[n];
    int brr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    int mx=arr[0];
    int mn=arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]>mx){
            count++;
            mx=arr[i];

        }
        if(arr[i]<mn)
        {
            count++;
            mn=arr[i];
        }
    }



    cout<<count;


    return 0;
}
