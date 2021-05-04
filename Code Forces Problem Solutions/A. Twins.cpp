#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    int arr[n];
    float sum=0;
    int got=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }


        sum=sum/2;


    sort(arr,arr+n);

    for(int i=n-1;i>=0;i--)
    {
        got+=arr[i];
        count++;
        if(got>sum)
            break;
    }

    cout<<count<<endl;

    return 0;
}
