#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,num,m=0,sum[2];
    sum[0]=0;
    sum[1]=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            sum[m]+=arr[i]+arr[i+1];
        }
        else
            break;

    }

    cout<<sum[0];

    return 0;
}
