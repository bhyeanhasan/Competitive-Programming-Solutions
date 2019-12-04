#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,m=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1]){
            count++;
            if(count>m)
                m=count;
        }
        else
            count=0;
    }

    if(count>m)
        m=count;

    cout<<m+1;
}
