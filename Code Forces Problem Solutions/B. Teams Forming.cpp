#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);

    for(int i=0;i<n;i+=2)
    {
        if(arr[i]==arr[i+1])
        {
            count+=0;
        }
        else
        {
            int x=abs(arr[i]-arr[i+1]);
            count+=x;
        }
    }

    cout<<count<<endl;

    return 0;
}
