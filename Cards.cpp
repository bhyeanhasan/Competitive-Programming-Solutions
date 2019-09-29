#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,s=0,count=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

        s+=arr[i];
    }

    int x=s/(n/2);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==x )
            {
                count++;
                cout<<i+1<<" "<<j+1<<endl;
                arr[i]=0;
                arr[j]=0;
                if(count==n/2)
                    break;
            }
        }
    }

    return 0;
}
