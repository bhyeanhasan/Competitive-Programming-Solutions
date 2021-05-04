#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=1,ok=0,i;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++)
        cin>>arr[i];

    for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            if(count>ok)
            {
                ok=count;
            }
            count=1;
        }
        else
            count++;
    }

    if(count>ok)
    {
        ok=count;
    }
    cout<<ok<<endl;
    return 0;
}
