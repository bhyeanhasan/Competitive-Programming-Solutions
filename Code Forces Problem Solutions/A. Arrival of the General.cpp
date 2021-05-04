#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,nn,m,bro,cho,x=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bro=arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]>bro)
            bro=arr[i];
    }
    cho=m;

     for(int i=0;i<n;i++)
    {
        if(arr[i]<cho)
            cho=arr[i];
    }




    for(int i=0;i<n;i++)
    {
        if(arr[i]==bro)
             m=i;

        if(arr[i]==cho && x==0){
             nn=i;
             x=1;
        }
    }
    int sum=m+(n-nn-1);
    cout<<sum;
    return 0;
}
