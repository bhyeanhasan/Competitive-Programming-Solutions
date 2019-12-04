#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l;
    cin>>n>>l;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);

    int diff=0;
    for(int i=1;i<n;i++)
    {
        int d=arr[i]-arr[i-1];
        diff=max(diff,d);

    }

    float p1=arr[0]-0;
    float pn= l-arr[n-1];

    float res = diff*1.00/2;

    res=max(res,max(p1,pn));


    printf("%.10f",res);


    return 0;
}
