#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,c=0,x=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            c++;
        }
        else
        {
        if(x<c)
            x=c;
            c=0;
        }
    }
        if(x>c)
            c=x;

    cout<<c+1<<endl;
}
